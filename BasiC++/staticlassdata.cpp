/*Why would you want to use static member data? As an example, suppose an object needed 
to know how many other objects of its class were in the program. In a road-racing game, for
example, a race car might want to know how many other cars are still in the race. In this case a
static variable count could be included as a member of the class. All the objects would have
access to this variable. It would be the same variable for all of them; they would all see the
same count.*/

#include <iostream>
using namespace std;

class foo 
    {
        private:
            static int count; //only one data item for all objects
                             //note: “declaration” only!
    public:
        foo() //increments count when object created
            { count++; }
        int getcount() //returns count
            { return count; }
    };
    int foo::count = 0; //*definition* of count
int main()
    {
    foo f1, f2, f3; //create three objects
    cout << "count is " << f1.getcount() << endl; //each object
    cout << "count is " << f2.getcount() << endl; //sees the
    cout << "count is " << f3.getcount() << endl; //same value
    return 0;
    }