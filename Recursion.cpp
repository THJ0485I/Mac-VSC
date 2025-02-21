// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

// Iterative approach
// We access each item/number in a collection
// for each of those number, add it to the result 
int sum(int n)
{
    int result = 0;
    for(int i = 0; i <= n; i++)
    {
        result += i;
    }
    return result;
}
/*
sum_recur(5) 

5 + sum_recur(4)
5 + 4 + sum_recur(3)
5 + 4 + 3 + sum_recur(2)
5 + 4 + 3 + 2 + sum_recur(1)
5 + 4 + 3 + 2 + 1 + sum_recur(0)
5 + 4 + 3 + 2 + 1 + 0   
*/

// Recursion approach
int sum_recur(int n)
{
    // Base Case is required to break the chain of recursion
    if (n == 0) return 0;

    // Reduce calling itself with a smaller input
    return n + sum_recur( n - 1 );
}

int main() 
{
    cout << sum_recur(100) << endl;
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string> 
using namespace std;

void walk_backward(int n)
{
    if (n == 0) 
    {
        cout << "You take step #" << n << endl;
        return;
    }
    
    cout << "You take step #" << n << endl;
    walk_backward(n - 1);
}

void walk_forward(int n)
{
    if(n == 0) return;

    walk_forward(n - 1);

    cout << "You take step # " << n << endl;
}

/*
walk_forward(10) - put on hold
walk_forward(9) - put on hold
walk_forward(8) - put on hold
walk_forward(7) - put on hold
...
...
walk_forward(1) - put on hold - reattend to it - prints step 1 
walk_forward(0) = kill walk_forward(0) with return
*/



int main() 
{
    walk_backward(10);
    walk_forward(10);

    
    return 0;
}

/*
n = 10

You take step # 10
You take step # 9
You take step # 8
...
You take step # 1
*/

//////////////////////////////////////////////////////////////////

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

// To evaluate the n-th term Fibonacci term with recursion

unsigned long long fib(int n)
{
    // base case
    // input n is the term number
    if (n <= 1) return n;

    return fib(n - 2) +  fib(n - 1);

}

/*
                    fib(5)

fib(3)                +                 fib(4)
fib(1) + fib(2)       +             fib(2) + fib(3)
1  +  fib(0) + fib(1)   +     fib(0) + fib(1)   + fib(1) + fib(2)
1 + 0 + 1 + 0 + 1 + 1 + fib(0) + fib(1)
1 + 0 + 1 + 0 + 1 + 1 + 0 + 1 = 5
*/

// Bottom-Up Recursion
unsigned long long fib_bottom_up(int n, int a=0, int b = 1, int current = 0)
{
    // a denotes perv. term
    // b denotes the  current term
    // current denotes the current fib term that has to be printed

    // if current is less than n, recursion continues
    if(current < n)
    {
        cout << a << " ";

        // recur top the next fibonacci term by shoifting the valus
        fib_bottom_up(n ,b ,a+b, current+1);
    }

}

/*
fib(5, 0, 1, 0)    - prints 0
fib(5, 1, 1, 1)    - prints 1
fib(5, 1, 2, 2)    - prints 1
fib(5, 2, 3, 3)    - prints 2
...
*/


int main() 
{
    fib_bottom_up(10);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Recursive Approach
// In-Place String Reversal
// Avoid additional memory consumption
// Best for large datasets
void reverseInPlace(string& anyString, int left, int right)
{
    // left - leftmost index of a range of character
    // right - rightmost index of a range of characters

    if (left >= right) return;

    swap(anyString[left], anyString[right]);

    reverseInPlace(anyString, left + 1, right - 1);
}

/*
reverseInPlace("Labubu", 0, 5)
reverseInPlace("Labubu", 1, 4)
reverseInPlace("Labubu", 2, 3)
*/

int main() {

    string name  = "Labubu";
    reverseInPlace(name, 0, name.size() - 1);
    cout << name << endl;
    
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
a
// Time Complexity  - It is a measure of how sample size affects processing time

// Build Binary Search function with recursion
int binary_search(vector<int> v, int target, int left, int right)
{
    // Left - denotes the first index of vector v
    // Right - denotes the last index of vector v

    // Base Case: If the saerch range in invalid
    if(left > right)
    {
        return -1; // Target not found
    }

    // Step 2: Identify mid index of input vector v
    int mid = (left + right) / 2;

    if (v[mid] == target)
    {
        return mid; // target found, return target's index(mid)

    } else if (v[mid] > target)
    {
        // Search in the left half by calling itself
        return binary_search(v, target, left, mid - 1);

    } else
    {
        // Search in the right half by calling itself
        return binary_search(v, target, mid + 1, right);
    
    }
}


int main()
{
    vector<int> scores = {80, 95, 45, 20, 50, 100, 98, 87, 66, 0};

    // Step 1: sort input vector v in ascending order
    sort(scores.begin(), scores.end());

    cout << binary_search(scores, 95, 0, scores.size() - 1) << endl;

    return 0;
}

// Solve Tower of Hanoi with recursion

#include <iostream>
using namespace std;

void towerOfHanoi(int N, char Source, char helper, char destination)
{
    // A source, helper and destination pillar changes for each re3cursive step

    // Base case:
    if(N == 1)
    {
        cout << "Move disc 1 from " << Source << " to " << destination << endl;
        
        return;
    }

    // Recursive Steps
    towerOfHanoi(N -1, Source, destination,  helper);
    cout << "Move disc " << N << " from " << Source << " to " << destination << endl;
    towerOfHanoi(N - 1, helper, Source, destination);
}


int main()
{
    int N;
    cout << "Enter the number of disc: ";
    cin >> N; 

    towerOfHanoi(N, 'A', 'B', 'C');
}
