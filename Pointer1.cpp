// A pointer is a variables that stores the memory address of another variable

#include <iostream>
#include <string>
using namesapce std;

int main()
{
    // Create an integer variable a
    int a = 100;

    // to identify its memory address
    cout << &a << endl;

    // Create an iteger pointer p1
    int * p1;

    //Set p1 to point to the memory address of variable a
    p1 = &A

    // get p1 to extract the data that is stored in the memory address of a
    // for that, we have to dereference p1

    cout << *p1 << endl;
    
    cout << p1 << endl;

    return 0;
}
