//============================================================================
// Name        : Project.cpp
// Author      : Brandon London
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    const int num_students = 5;
    const int num_tests = 3;
    double testScores[num_students][num_tests];
    string filename;
    ifstream inputFile;


    cout << "Enter name of file to read: ";
        cin >> filename;
    inputFile.open(filename.c_str());
    if ( !inputFile )
    {
       cout << "Can't open file " + filename +"\n";
       return 1;
    }
    for(int i = 0; i < num_students; i++)
    {
        for(int j = 0; j < num_tests; j++)
        {
            inputFile >> testScores[i][j];
        }
    }
    inputFile.close();
    cout << "\nAverage per student:  ";
    for(int i = 0; i < num_students; i++)
    {
        double sumForStudent = 0;
        for (int j = 0; j < num_tests; j++)
        {
            sumForStudent = sumForStudent + testScores[i][j];
        }
        double avgOfStudent = sumForStudent / num_tests;
        cout << "\t" << setiosflags(ios::fixed) << setprecision(2) << avgOfStudent;
    }
    cout << "\n\nAverage per test:  ";
    for(int i = 0; i < num_tests; i++)
    {
        double sumForTest = 0;
        for (int j = 0; j < num_students; j++)
        {
            sumForTest = sumForTest + testScores[j][i];
        }
        double avgOfTest = sumForTest / num_students;
        cout << "\t" << setiosflags(ios::fixed) << setprecision(2) << avgOfTest;
    }
    double max = 0, countOfA = 0;
    for(int i = 0; i < num_students; i++)
    {
        for (int j = 0; j < num_tests; j++)
        {
            if(testScores[i][j] > max)
                max = testScores[i][j];

            if(testScores[i][j] >= 90)
                ++countOfA;
        }
    }

    cout << "\n\nOverall best score:  " << max;
    cout << "\n\nNumber of A's:  " << countOfA << "\n\n";

    return 0;
}
