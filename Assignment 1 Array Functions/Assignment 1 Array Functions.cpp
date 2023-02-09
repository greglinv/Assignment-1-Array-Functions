// Name: Gregory Linville
// Project: Assignment 1

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    int size = 100;
	int arr[100];
    
	char input;
    int index = 0;

	try {
		inputDocument(arr);
	}
	catch (...){
		cout << "Error opening File";
	}
    
    printMenu();
	cin >> input;
	cin.ignore(1000, '\n');

    while (toupper(input) != 'Q') {

        if (toupper(input) == 'S') {
            int result = searchArray(arr);
            if (result == -1) {
                cout << "Number not Found" << endl;
            }
            else {
                cout << "Number found at " << result << endl;
            }
        }
        else if (toupper(input) == 'P') {
            printArray(arr, size);
        }
        else if (toupper(input) == 'M') {     
            cout << "Which index in the array do you want to change.\n";
            cin >> index;
            modifyInteger(arr, index);
        }
        else if (toupper(input) == 'A') {
            addInteger(arr, &size);
        }
        else if (toupper(input) == 'R') {
            cout << "Which index in the array do you want to remove.\n";
            cin >> index;
            removeInteger(arr, index, &size);
        }
   
        else {
            cout << "\nInvalid menu option Try again" << endl;
        }
        printMenu();
        cin >> input;
        cin.ignore(1000, '\n');

    }

}
