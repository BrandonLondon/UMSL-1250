//============================================================================
// Name        : Project5.cpp
// Author      : Brandon London
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// declare varibles
	ifstream inputfile;
	int integer;
	int numberOfIntegers=0;
	double sumOfIntegers=0;
	double averageOfIntegers=0;
	int evenCounter;
	int oddCounter;
	evenCounter=0;
	oddCounter=0;
	inputfile.open("random.txt");
	if(!inputfile)
	{
	cout<<"Cant open the file Random.txt"<<endl;
	return 0;
	}
	inputfile>>integer;
	while(inputfile)
	{
		numberOfIntegers++;
		sumOfIntegers=sumOfIntegers+integer;
		inputfile>>integer;
		if(integer%2==0)
				{
				evenCounter++;
				}
				else
				{
				oddCounter++;
				}
					}
	if(numberOfIntegers>0)
	{
	}
		averageOfIntegers=sumOfIntegers/numberOfIntegers;
		cout<<"The number of integers in the file: "<<numberOfIntegers<<endl;
		cout<<"The number of even numbers is: "<<evenCounter<<endl;
		cout<<"The number of odd numbers is: "<<oddCounter<<endl;
		cout<<"The sum of the integers in the file: "<<sumOfIntegers<<endl;
		cout<<"The average of the integers in the file: "<<averageOfIntegers<<endl;
	}
