// A pointer is a variable that stores the memory address of another variable

#include <iostream>
#include <string>
using namespace std;

int main()
{
`
    // A pointer is reusable
    // A pointer can also be used to modufy the value of a variable

    int firstValue, secondValue;

    // create an integer pointer called p1
    int * p1;

    // set p1 to point towards FirstValue
    p1 = &firstValue;

    // push an integer data into firstValue with the pointer
    *p1 = 100;
    cout << "firstValue: " << firstValue << endl;

    //reuse p1 to point towards the memory address of secondValue variable
    p1 = &secondValue;
    *p1 = 200;
    cout << "secondValue: " << secondValue << endl;

    return 0;

}
