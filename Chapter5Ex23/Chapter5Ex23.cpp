/*
Title:Chapter 5 Exercise 23 - Math Tutor - Pattern Display
File name:Chapter5Ex23_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:11/24/2024
Requirements:

Write a program that uses a loop to display Pattern A, followed by a loop that displays pattern B.

Pattern A:                 Pattern B:

+                          ++++++++++
++                         +++++++++
+++                        ++++++++
++++                       +++++++
+++++                      ++++++
++++++                     +++++
+++++++                    ++++
++++++++                   +++
+++++++++                  ++
++++++++++                 +
*/

#include <iostream>
using namespace std;

void patternA();
void patternB();

int main()
{
    cout << "Pattern A:" << endl << endl;
    patternA();
    cout << "Pattern B:" << endl << endl;
    patternB();
}

void patternA()
{
    for (int patternA = 1; patternA < 11; patternA++)
    {
        for (int count = 0; count < patternA; count++)
        {
            cout << "+";
        }
        cout << endl;
    }
}

void patternB()
{
    for (int patternB = 10; patternB > 0; patternB--)
    {
        for (int count = 0; count < patternB; count++)
        {
            cout << "+";
        }
        cout << endl;
    }
}
