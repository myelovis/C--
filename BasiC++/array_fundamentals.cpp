/*This program, REPLAY, creates an array of four integers representing the ages of four people. 
It then asks the user to enter four values, which it places in the array. 
Finally, it displays all four values.*/

#include <iostream>
using namespace std;

int main()
    {
    int age[4]; //array having 4 ints
                /* The number in brackets must be a constant or 
                an expression that evaluates to a constant,
                and should also be an integer. In the example we use the value 4 */
    for(int j=0; j<4; j++) //get 4 ages
        {
        cout << "Enter an age: ";
        cin >> age[j]; //access array element
        }
    for(int j=0; j<4; j++) //display 4 ages
        cout << "You entered " << age[j] << endl;
    return 0;
    }