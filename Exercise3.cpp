/*
Given a string, sort the characters in descending order 
based on their frequency (characters with higher frequency should come first). 
If two characters have the same frequency, 
order them according to their lexicographical order.

Example:
"russia" -> ssairu
"banana" -> aaannb
Real Life example where frequency sorting algorithm is useful
1. Search Engines (Google, Safari)
2. Social media post (sorted by likes and shares)

Data Structure;
priority queue

*/

#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;


string frequencySort(string s)
{
    // Create an unordered map to record the ouccurrance 
    unordered_map<char, int> CountMap;


    // create empty priority queue
    priority_queue<pair<char, int>> pq;

    // iterate string s with a for-each loop
    for(char ch : s)
    {
        CountMap[ch]++;
    }

    // transfer all key value pairs in the map to the pq
    for(auto& pair; CountMap)
    {
        pq.push({pair.first, pair.second});
    }

    // build a sorted string from pq's content
    string sortedString = "";

    while(!pq.empty())
    {
        int count = pq.top().second;

        char ch = pq.top().first;

        sortedString.append(count, ch);

        pq.pop();
    }

    return sortedString;

    
}

int main()
{
    cout << frequencySort("banana") << endl;

    return 0;
}
