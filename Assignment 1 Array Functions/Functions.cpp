#include <fstream>
#include <iostream>

using namespace std;


//Read the Document into an Array
void inputDocument(int arr[]) {
	ifstream fin("input.txt");

	ifstream close();
	while (fin.good()) {
		for (int i = 0; i < sizeof(arr); ++i) {

			fin >> arr[i];
		}
	}
}
