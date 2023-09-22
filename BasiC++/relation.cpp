/*
The flow of control jumps from one part of the program to another, 
depending on calculations performed in the program. 
Program statements that cause such jumps are called control
statements. There are two major categories: loops and decisions.*/

// relat.cpp
// demonstrates relational operators
#include <iostream>
using namespace std;
int main()
{
int numb;
cout << "Enter a number: ";
cin >> numb;
cout << "numb<10 is " << (numb < 10) << endl;
cout << "numb>10 is " << (numb > 10) << endl;
cout << "numb==10 is " << (numb == 10) << endl;
return 0;
}