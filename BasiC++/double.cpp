// mixed.cpp
// shows mixed expressions
#include <iostream>
using namespace std;
int main()
    {
    int count = 7;
    float avgWeight = 155.5F;
    double totalWeight = count * avgWeight;
    cout << "totalWeight=" << totalWeight << endl;
    return 0;
    }

    // double type is a result of int.float
/*When we multiply the variable intVar by 10, the result—15,000,000,000—is far too large to
fit in a variable of type int or unsigned int. This leads to the wrong answer, as shown by the
output of the first part of the program.
We could redefine the data type of the variables to be double; this provides plenty of room,
since this type holds numbers with up to 15 digits.*/