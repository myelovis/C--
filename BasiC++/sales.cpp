#include <iostream>
using namespace std;

int main()
    {
    const int SIZE = 6; // Size of array
    double sales[SIZE]; // Array of 6 variables
    cout << "Enter widget sales for 6 days\n" << endl;
    for (int j = 0; j < SIZE; j++) // Put figures in array
        {cin >> sales[j];}
    double total = 0;
    for (int j = 0; j < SIZE; j++) // Read figures from array
        {total += sales[j];} // To find the total
    double average = total / SIZE; // Find the average
    cout << "Average = " << average << endl;
    return 0;
    }
