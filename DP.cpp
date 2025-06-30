// 0-1 Knapsack Problem

#include <iostream>
#include <vector>
using namespace std;

// C - Capacity
// N - Number of items
int knapsack(int C, const vector<int>& weights, const vector<int>& values, int N)
{
    // make a DP table (2D vectors) with (N+1) rows and (C+1) columns
    vector<vector<int>> DP(N+1, vector<int>(C+1, 0));

    // Iterate all rows
    for(int i = 1; i < N+1; i++)
    {
        for(int j = 1; j < C+1; j++)
        {
          // if current gem i can fit into the current knapsack with capcity  
          if(weights[i-1] <= j)
          {
            int pwgi = values[i-1] + DP[i-1][j-weights[i-1]j-weight[i-1]];
            int pwogi = DP[i-1][j];
            DP[i][j]= max(pwgi, pwogi);
          } else
          {
            DP[i][j] = DP[i-1][j];
          }
        }
    }
  return DP[N][C];
    }

int main()
{
    int C = 5;
    vector<int> weights = {5, 3, 4, 2};
    vector<int> values = {60, 50, 70, 30};
    int N = weights.size();

    cout << "Maximum achievable value in the knapsack: " <<  knapsack(C, weights, values, N) << endl;


  /////////////////////////////////////////////////

  /*
Question: Climbing Stairs

Problem Statement:
You are climbing a staircase.
It takes n steps to reach the top.

Each time you can either climb 1 step or 2 steps.

In how many distinct ways can you climb to the top?
*/

#include <iostream>                    
#include <vector>                       
using namespace std;                 

long long climbStairs(int n) {
    // creates a dp table with 1 row and n+1 columns
    vector<long long> dp(n+1, 0); 

    // there's exactly 1 way to get to step 0 and step 1   
    dp[0] = 1;
    dp[1] = 1;

    // from solt 2 onwards
    // fill each slot with a value = sum of previous tow slots
    for (int i = 2; i <= n; i++)
    {
      dp[i] = dp[i-1] + dp[i-2];
      
    }
  
    return dp[n];
    
}

int main() {
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    cout << "Number of ways to climb: " << climbStairs(n) << endl;
    return 0;
}


