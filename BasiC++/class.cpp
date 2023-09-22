/*We’ve learned about structures, which provide a way to group data elements. 
We’ve examined functions, which organize program actions into named entities*/
#include <iostream>
using namespace std;
class smallobj
    {
    private:
        int somedata; //class data
    public:
        void setdata(int d) //member function to set data
            { somedata = d; }
        void showdata() //member function to display data
            { cout << "Data is " << somedata << endl; }
        };
int main()
    {
    smallobj s1, s2; //define two objects of class smallobj
    s1.setdata(1066); //call member function to set data
    s2.setdata(1776);
    s1.showdata(); //call member function to display data
    s2.showdata();
    return 0;
    }

/*In C++, `private:` and `public:` are access specifiers that determine the visibility
 and accessibility of class members (data members and member functions) within a class.
Here's what they mean:
Toprovide a security measure you might, for example, require a user to supply a password before
granting access to a database. The password is meant to keep unauthorized or malevolent users
from altering (or often even reading) the data
1. `private:`:
   - Members declared under the `private:` access specifier are only accessible within the class 
   where they are defined.
   - They cannot be accessed directly from outside the class. This encapsulation helps in data 
   hiding and ensures that the internal implementation details of a class are hidden from external code.
   - In your example, `int somedata;` is a private data member of the `smallobj` class. It can only be 
   accessed and modified within the `smallobj` class itself, and not from `main()` or any other external code.

2. `public:`:
   - Members declared under the `public:` access specifier are accessible from any part of the program,
    including functions outside the class and the `main()` function.
   - They are meant to represent the interface of the class, providing a way for external code to 
   interact with and manipulate the class's objects.
   - In your example, `void setdata(int d)` and `void showdata()` are public member functions 
   of the `smallobj` class. These functions can be called from `main()` or any other part of your 
   program to set and display the `somedata` value of `smallobj` objects.

Here's a breakdown of your code:

- `int somedata;` is a private data member of the `smallobj` class, which means it can only be 
accessed within the class itself.
- `void setdata(int d)` and `void showdata()` are public member functions. 
These functions allow you to set and display the `somedata` value of `smallobj` objects.
- In the `main()` function, you create two `smallobj` objects, `s1` and `s2`. 
You then use the public member function `setdata` to set the `somedata` values for 
these objects and the `showdata` function to display those values.
This encapsulation and separation of private and public members help in controlling access to
the internal state of the class and maintaining data integrity.*/
