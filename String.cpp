// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

void PrintFirstLastChar(string testString)
{
    // C++ does not support negative indexing
    cout << testString[ 0 ] << endl;
    cout << testString[ testString.length() - 1 ] << endl;
}

string InsertSpecial()
{
    string word, special;
    cout << "Enter a word and a special character (separated by a space): " << endl;
    cin >> word >> special;
    
    string result = "";
    
    // process result string here
    // for-each loop that iterates word variable
    for(char c : word)
    {
        result += c;
        result += special;
    }
    
    // to remove last character of a string/vector/array
    result.pop_back();
    
    return result;
}
// example:
// input: cookie #
// output: c#o#o#k#i#e


string NumString()
{
    // consider numbers from 0 - 9 only
    cout << "Enter a single digit 0 - 9: " << endl;
    
    // code to extract an integer from the console and save it in variable n
    int n;
    cin >> n;
    
    string result = "";
    
    if (n == 0)
    {
        result = "0";
    }

    
    // count from 1 to n with counter i
    for(int i = 1; i <= n; i++)
    {
        // add i to string result, i times
        // create a loop that repeats i times
        for(int j = 0; j < i; j++)
        {
            result += to_string(i);
        }
    }
        
    return result;
}
// example:
// input: 5
// output: 122333444455555


int main() {
    cout << NumString() << endl;

    return 0;
}
