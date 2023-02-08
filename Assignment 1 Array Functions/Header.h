#pragma once

#include <iostream>
#include<fstream>
#include<sstream>
#include <string>

void inputDocument(int arr[]);
//pre: Take in an Empty array
//post: Fill it with integers from a document

void printArray(int arr[]);
//Pre: Take in the array
//Post: Print the array

int searchArray(int arr[]);
//Pre: Take in the array and a number to be searched for
//Post: Return the index of the object if found;

void printMenu();
//Pre: Nothing
//Post: Output a menu to the user

void modifyInteger(int arr[], int index);
//Pre: take in the array and the index of an int
//Post: Modify the location to the users request

void addInteger(int arr[]);