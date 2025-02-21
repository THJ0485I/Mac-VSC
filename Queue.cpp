#include <queue>
#include <iostream>
using namespace std;

int main ()
{
    // Create an empty queue
    queue<string> q;

    // Add elements to teh queue (enqueue)
    q.push("HJ");
    q.push("Menaja");
    q.push("Zac");
    q.push("Trevan");
    q.push("Timothy");
    q.push("Kingsley");
    q.push("Eros");

    // To identify teh first and last element in teh queue
    cout << "First Element: " << q.front() << endl;
    cout << "Last Element: " << q.back() << endl;

    // Remove an item from the queue (Dequeue)
    while(!q.empty())
    {
        cout << "Serving: " << q.front() << endl;
        q.pop();
    }


    return 0;
}

// Array, vector, satck queue, unordered map
