#include <iostream>
using namespace std;

void starline(); // Function declaration
/*The declaration tells the compiler that at some later point we plan to present a function called
starline. The keyword void specifies that the function has no return value, and the empty
parentheses indicate that it takes no arguments.
Function declarations are also called prototypes, since they provide a model or blueprint for the
function. They tell the compiler, “a function that looks like this is coming up later in the program, 
so it’s all right if you see references to it before you see the function itself.”*/

int main()
    {
    starline(); // Call to function
    cout << "Data type      Range" << endl;
    starline(); //call to function
    cout << "char -128 to 127" << endl
    << "short -32,768 to 32,767" << endl
    << "int System dependent" << endl
    << "long -2,147,483,648 to 2,147,483,647" << endl;
    starline(); //call to function
    return 0;
    }
//--------------------------------------------------------------
// Function definition 

void starline() // function delarator
    {
    for(int j=0; j<45; j++) //function body
    cout << '*';
    cout << endl;
    }