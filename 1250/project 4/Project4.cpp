//============================================================================
// Name        : Project4.cpp
// Author      : Brandon London
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	char package;
	double cost, data, extradata;
	cout<<"enter package A,B, or C: ";
	cin>>package;

		if(package=='A'||package=='B'||package=='C')
	{
		cout<<"Enter gigabytes of data used:";
		cin>>data;
		switch(package)
		{
		case 'A':
			if(data<=4)
			cost=39.99;
			else
			extradata=data-4;
			cost=39.99+10*extradata;
		break;
		case'B':
		if(data<=8)
		cost=59.99;
		else
			{
			extradata=data-8;
			cost=59.99+8*extradata;
			}
		break;
		case 'C':
		cost=69.99;
			}
	cout<<"Monthly bill:$"<<cost<<endl;
			}
	else
	{
		cout<<"Invalid choice."<<endl;
	}

	return 0;
	}
