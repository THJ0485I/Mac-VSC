// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() 
{
    int n;
    for (int i = 1; i <= 100; ++i) 
    {
        cout << "* - " << i << endl; // Print the value of i
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

// Build a function that reduces an original interger by 10
void sum(n)
{

}

int main()
{
    return 0;
}

///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int potion(int age) 
{
    return age - 10;
}

int main() 
{
    int age = 100;
    age = potion(age);

    cout << age << endl;

    return 0;
}


string item = "dirt"

void magic(string &item) 
{
    item = "diamond";
}

////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

// Pass by Value vs Pass by referrence
// It has to do with functions

// Modify an array by reference
void Array_Multiplayer(int (&someArray)[10])
{
    // when there's &
    // we mess with teh original data
    for(int& i : someArray)
    {
        i = i * 2;
    }
}

int main() 
{
    // Initilize an interger array
    // Array size has to be declared in the` first place
    // c++ array has fixed size
    int weight[10] = {1, 2, 3, 4, 5};

    for (int i : weight)
    {
        cout << i << " ";
    }

    cout << endl;

    Array_Multiplayer(weight);

    for(int i : weight)
    {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}



