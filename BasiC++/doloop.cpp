/*sometimes you want to guarantee that the loop body is
executed at least once, no matter what the initial state of the test expression. 
When this is the case you should use the do loop, 
which places the test expression at the end of the loop.*/

/*The for loop is appropriate
when you know in advance how many times the loop will be executed. The while and do loops
are used when you don’t know in advance when the loop will terminate (the while loop when
you may not want to execute the loop body even once, and the do loop when you’re sure you
want to execute the loop body at least once)*/

#include <iostream>
using namespace std;
int main()
{
long dividend, divisor;
char ch;
do //start of do loop
{ //do some processing
cout << "Enter dividend: "; cin >> dividend;
cout << "Enter divisor: "; cin >> divisor;
cout << "Quotient is " << dividend / divisor;
cout << ", remainder is " << dividend % divisor;
cout << "\nDo another? (y/n): "; //do it again?
cin >> ch;
}
while( ch != 'n' ); //loop condition
return 0;
}