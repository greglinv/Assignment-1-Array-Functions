// Name: Gregory Linville
// Project: Assignment 1

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	int arr[100];
	char input;

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
            printArray(arr);
        }
        else if (toupper(input) == 'M') {
        }
        else if (toupper(input) == 'A') {
        }
        else if (toupper(input) == 'R') {
        }
   
        else {
            cout << "\nInvalid menu option Try again" << endl;
        }
        printMenu();
        cin >> input;
        cin.ignore(1000, '\n');

    }

}
