/*Static local variables are used when it’s necessary for a function to remember a value when it
is not being executed; that is, between calls to the function*/

#include <iostream>
using namespace std;
float getavg(float); 

int main()
    {
    float data=1, avg;
    while( data != 0 )
        {
        cout << "Enter a number: ";
        cin >> data;
        avg = getavg(data);
        cout << "New average is " << avg << endl;
        }
    return 0;
    }

float getavg(float newdata)
    {
    static float total = 0; //static variables are initialized
    static int count = 0; // only once per program
    count++; //increment count
    total += newdata; //add new data to total
    return total / count; //return the new average
    }