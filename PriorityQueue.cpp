#include <queue>
#include <iostream>
#include <vector>
using namespace std;

// Problem: Connect ropes to minimize cose
// Dat structure: Priority Queue

/*
Problem Statement
You are given N ropes of different lengths. Your task is to connect all the ropes into one rope.
Every time you connect two ropes, the cost is the sum of their lengths.
Your goal is to minimize the total cost of connecting all ropes.
*/

int minCost(int rops [], int N)
{
    // Create a prirority queue that prirortisises shorter ropes (smaller intergers) first
    priority_queue<int, vector<int>, less<int>> pq;

    int totalCost = 0;

    // Transfer all items from ropes array to pq using a range-based for loop
    for(int i - 0; i < N; i++)
    {
        pq.push(rope[i]);
    }

    while(pq.size() > 1)
    {
        //process the pq
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

         // Connect shortest and second shortest ropes
        int cost = first + second;
        totalCost = totalCost + cost;

        // Push the new combined rope back intp the pq
        pq.cost(cost);
    }

    return totalCost;



}


int main()
{
    int N = 5
    int ropes[] = {6, 3, 8, 9 ,2}; // ropes with different lengths

    cout << minCost(ropes, N) << endl;

    return 0;

}
