// DP Problems needs a DP table

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


////////////////////////////////////

/*
Question: Unique Paths (Robot in Grid) Porblem Statment
A robot is located at the top-left corner of an m x n grid. It can only move down or right at any point
Find the number of unique paths from the top-left corner to the bottom-right corner 
*/


#include <iostream>
#include <vector>
using namespace std;

// m - number of rows
// n - number of columms 
long long uniquePaths(int m , int n)
{
    vector<vector<long>> dp(m, vector<long long>(n-1)); //Initialize all with 1s

    
    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            
            // fill each slot with the sum f its top and left cell's value
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
}


int main()
{
    int m = 3, n = 7;
    cout << "Number of unique paths: " << uniquePaths(m, n) << endl;
    return 0;
}

////////////////////////////////////


// Total unique ways to make change

#include <iostream>
#include <vector>

using namespace std;

int countWaysToMakeChange(vector<int>& coins, int m, int n) {

    // create a 2D (m + 1) x (n + 1) DP table
    // m - the number of denominations
    // n - amount
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    // fill the first column with zeros
    // because there's just one way to make change for amount 0
    // that is to take no coins at all

    for(int i = 0; i <= m; i++)
    {
        // iterate all columns
        for(int j = 1; j <= n; j++)   
        {
            // total ways to make change is the sum of the following:
            // 1. total ways to make change when current coin is NOT included
            // 2. total ways to make change when current coin is allowed to be included

            // calculate point 1
            dp[i][j] = dp[i-1][j];

            // calculate point 2:
            // if the coin value is less then the amount j, then we're allowed to take it
            // i - row number
            // j - column number
            if(coins[i-1] <= j)
            {
                dp[i][j] = dp[i][j] + dp[i][j-coins[i-1]];
            }
        }
        
    }

    return dp[m][n]

    // fill the dp table from slot (1, 1) onwards with a dp relation
}

int main() {
    vector<int> coins = {1, 2, 5};
    int m = coins.size();
    int n = 5;
    cout << "Total unique ways to make change for " << n << " is: " << countWaysToMakeChange(coins, m, n) << endl;
    return 0;
}




/////////////////////////////////


// LeetCode 198. House Robber
// https://leetcode.com/problems/house-robber/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(vector<int>& nums)
{
    // calculate the total number of houses
    int N = nums.size();

    if(N == 0) return 0;
    if(N == 1) return nums[0];

    // create a 1d dp table with N slots
    // it has to keep a record of the max profit when you rob up to house i
    vector<int> dp(N, 0);

    // base cases
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    // for each house from house i = 2 onwards, there're two options to consider:
    // 1. to skip it?
    // 2. to rob it?

    for(int i = 2; i < N; i++)
    {   
        // if you skip the current house i, then you can rob up to the previous house i - 1
        int skip_profit = dp[i - 1];

        // if you rob the current house i, then you can rob up to the previous two house i - 2 
        int rob_profit = nums[i] + dp[i - 2];
        dp[i] = max(skip_profit, rob_profit);
    }

    return dp[N - 1];    
}


int main()
{
    vector<int> nums = {1, 9, 1, 1, 9, 1};

    cout << "Max money we can rob: " << rob(nums) << endl;

    return 0;
}

//////////////////////////////////

// https://leetcode.com/problems/house-robber-iii/description/

#include <iostream>
#include <utility>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {} // constructor
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 


// Define a helper function that returns a pair of values [a, b] for each subtree
// a - max money from a subtree if the current root node is robbed
// b - max money from a subtree if the current root node is NOT robbed
pair<int, int> robSubtree(TreeNode * node)
{
// if it hits a null node, stop recursion
if(!node) return;

// do recursion to fidn the max profit in the left subtree
    robSubTree(node -> left)

}


// max profit when we consider the entire tree
int rob(TreeNode* node)
{
    
}



int main() {

    // Example usage
    TreeNode* root = new TreeNode(3);
    root -> left = new TreeNode(20);
    root -> right = new TreeNode(4);
    root -> left -> left = new TreeNode(100);
    root -> right -> right = new TreeNode(1);


    return 0;
}









