// circarea.cpp
// demonstrates floating point variables
#include <iostream> //for cout, etc.
using namespace std;
int main()
    {
    float rad; //variable of type float
    const float PI = 3.14159F;
    //The keyword const (for constant) precedes the data type of a variable. It specifies that the
    //value of a variable will not change throughout the program. Any attempt to alter the value of a
    //variable defined with this qualifier will elicit an error message from the compiler
    cout << "Enter radius of circle: "; //prompt
    cin >> rad; //get radius
    float area = PI * rad * rad; //find area
    cout << "Area is " << area << endl; //display answer
    return 0;
    }
