/ Implement browser's BACK, FORWARD, and NAVIGATION functionalities with STACK

#include <iostream>
#include <stack>
#include namespace std;

// Create 2 stacks to hold BACK and FORWARD browsing histories
stack<string> backStack;
stack<string> forwardStack;
string currentPage;

// Launch with the home page
currentPage = "https://homepage.com";
cout << "Starting at: " << currentPage << endl;

void Navigate(const string& newPageURL)
{
    // Make sure currentPage is not currently empty
    if (!currentPage.empty())
    {
        // Save currentPage in backStack before navigating to another page
    }

    currentPage = newPageURL;
    cout << "Visiting " << currentPage << endl;
}

void back()
{
    if (backStack.empty())
    {
        cout << "No back pages avaliable , back button disabled"
    }else
    {
        // Before returning to the previous page
        // Save currentPage in forwardStack
        forwardStack.push(currentPage);
        currentPage = backStack.top();
        backStack.pop();
        cput << "Back to: " << currentPage << endl;

    }
}

void forward
{
    
}

int main
{

    // Launch with the home page
    currentPage = "https://homepage.com";
    cout << "Starting at: " << currentPage << endl;
    
    while (true)
    {

    
        cout << "Navigate(N), Back(B), Forward(F), Quit(Q)?" << endl;

        string command;
        cin >> command;

        string userInputURL;

        
        if(command == "N")
        {
            // Navigate to a new page
            cout << "Enter a valid URL: " << endl;
            cin << userInputURL;
            Navigate(userInputURL);

        } else if (command = "B")
        {
            // Return to the previous page

        } else if (command = "F")
        {
            //Forward to another page

        }else if (comamnd = "Q")
        {
            // Quit the browser

        }
    }

    return 0;

}

//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

 

// 682. Baseball Game

// operations = ["5", "2", "C", "D", "+"]

int calPoint(vector<string>& operations)
{
    // Initialize an empty stack
    stack<int> record;

    // for-each loop to iterate operations vector
    for(const string& op : operations)
    {
        if(op == "C")
        {
            if(!record.empty())
            {
                record.pop();
            }
        } else if (op == "D")
        {
            if(!record.empty())
            {
                record.push(2 * record.top());
            }
        } else if (op == "+")
        {
            if(record.size() >= 2)
            {
                int top1 = record.top();
                record.pop();

                int top2 = record.top();

                record.push(top1);

                record.push(top1 + top2);
            }
        } else
        {
            record.push(stop(op));
        }
    }

    // Sum all scores in record stack
    // 4 lines
    int total = 0;
    while (!record.empty())
    {
        total =  total + record.top();
        record.pop();
    }
    return total;

}

// pop, push, top, size, empty

/////////////////////////////////////////////////////////////////////////////////////

#include <string>
#include <stack>
#include <iostream>
using namespace std;

// STACK - push, pop, size, top

/*
Leetcode 71. Simplify Path

input path: "/.../a/../b/c/../d/.//"

output path: /.../b/d
*/

string simplyfyPath(string rawPath)
{
    stack<string> stack;

    string currentLocation;

    // Iterate through the rawPath
    for(char c : rawPath)
    {
        // Extract current loactionif it hits slash
        if(c == '/')
        {
            if(currentLocatgion == "..")
            {

            } else if(!currentLocation.empty() && currentLOcation != ".")
            {
                s.push(currentLocation)
            }

            currentLocation.clear()
        }else
        }

            // Continue reading
            currentLocation += c;
        {
    }

    //REVERSE PRINT THE STACK
    string simplifyedPath;

    while(!s.empty())
    {
        simplifiedPath = "/" + s.top() + simpplifiedPath;
        s.pop();
    }   
    return simplifiedPath;


}

int main()
{
    cout << simplifyPath("/A/B/..") << endl;
}
