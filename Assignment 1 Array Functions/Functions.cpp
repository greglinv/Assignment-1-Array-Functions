#include "Header.h"
using namespace std;


//Read the Document into an Array
void inputDocument(int arr[]) {
	ifstream fin;
	fin.open ("input.txt");
	string line;
	if (!fin.is_open()) {
		cout << "File is not open" << endl;
        throw;
		return;
	}
    int i = 0;

    //read file by line
    while (getline(fin, line))     
    {

        stringstream ss(line);        
        string word;
        int number;


        while (ss >> word)
        {
            stringstream in;
            in << word;
            in >> number; 

            arr[i] = number;   
            i++;                    
        }
    }


	ifstream close();
}

//Output the Array
void printArray(int arr[], int size) {
    
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

    cout << endl;
}

//Search the Array for a specific number
int searchArray(int arr[]) {
    int result = -1;
    int query = 0;
    cout << "What Number do you want to search for?\n";
    cin >> query;

    //linear search no reason to assume numbers are sorted
    for (int i = 0; i < 100; i++) {
        if (arr[i] == query) {
            return i;
        }
    }
    return result;
}

//Output a basic menu to use the functions
void printMenu() {
    cout << "Would you like to (S)earch the array, (M)odify a number in the array, (A)dd a number to the array, (R)emove a number from the array, or (Q)uit\n";
}

//Change a value in the array based on the index
void modifyInteger(int arr[], int index) {

    int value, oldValue;
    cout << "What do you want to change it to?\n";
    cin >> value;
    cin.ignore(1000, '\n');

    oldValue = arr[index];

    arr[index] = value;

    cout << "Value change at " << index << " Previous value: " << oldValue << " New Value: " << value << endl;
}

//Create new array and add a new integer to it
void addInteger(int arr[], int *size) {

    int element;

    cout << endl << "Enter new element: ";
    cin >> element;

    arr[*size] = element;

    *size = *size + 1;

    cout << "Element Inserted\n";
}

void removeInteger(int arr[], int index, int* size) {

    for (int i = index; i < *size - 1; i++)
        arr[i] = arr[i + 1];


    *size = *size - 1;

    cout << "Element Removed\n";
}