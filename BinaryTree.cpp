// The implementation of Binary Tree data structure

// Example usage: family tree usgae
// The implementation fo Binary Tree data strucutre

// Leaf node: doesnt have any child nodes 
// Sub tree - smaller tree within the bigger tree 

/* using namespace std;
  #include <iostream>
  #include <queue>
  
  class Node {
  public:
      int data;
      Node * left;
      Node * right;
  
      // Constructor function
      Node(int val)
      {
          data = val;
          left = right = NULL;
      }
  }

  - This code creates a node
*/


using namespace std;
#include <iostream>
#include <queue>

class Node {
public:
    int data;
    Node * left;
    Node * right;

    // Constructor function
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
}

/*
DFS is an algorithmic technique to explore as deep as possible 
along each branch before backtracking. 
It’s commonly used in tree or graph traversal.
*/

void DFS(Node * node)
{
  if(node == NULL) return;
  
  DFS(node -> left);

  cout << node -> data << " ";
  DFS(node -> right);
}

int main()
{
  Node * root = new Node(1);

  root -> left = new Node(2);

  root -> right = new Node(3);

  root -> left -> left = new Node(4);

  root -> left -> right = new Node(5);

  root -> right -> left = new Node(6);

  root -> right -> right = new Node(7);

  DFS(root);
  

  return 0;
}


////////////////////////////////////////////////////

/*
Problem: Find the Maximum Value in a Binary Tree
Description:
Use DFS to traverse a binary tree and find the maximum value among all nodes.
*/

using namespace std;
#include <iostream>
#include <climits>

// Tree Node Structure                                                                           
struct Node 
{
  int data;
  Node* left;
  Node* right
  
  Node(int val) : data(val), left (NULL), right(NULL) {}


};


// DFS function to find the max value in any binray tree

int findMaxValue()
{

  if(node == NUL return INT_MIN;
  
  // Expore teh left branch 
  int LeftBranchMax = findMaxValue(node -> left);

  // Expore teh left branch 
  int LeftBranchMax = findMaxValue(node -> left);

  // Taek teh max value between left subtree, right subtree and teh subroot
  retunr max(node -> data, max(LeftBranchMax RightBranchMax));
}


int main() {
    /*
            10
           /  \
          7    15
         / \
        3   9
    */
    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(9);

  int max = FindMaxValue(root);


    return 0;
}



//////////////////////////////////////////////////////////////

// Binary Tree DFS (Sum all nodes)

#include <iostream>
using namespace std;

// Tree node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

void DFS_Sum(Node * node, int& sum):
{
  // if it hits a null node, stop recursion 
  if(node == NULL) return;

  // recurse into the left subtree
  DFS_Sum(node -> left, sum)

  // add a node's value to the sum variable
  sum = sum + node -> data;

  // recurse into the right subtree
  DFS_Sum(node -> right, sum);
}



int main() {
    /*
            10
           /  \
          7    15
         / \
        3   9
    */
    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(9);

    int totalSum = 0;
    DFS_Sum(root, totalSum);
    cout << "Sum of all nodes (Recursive Inorder DFS): " << totalSum << endl;

    return 0;
}



////////////////////////////////


/*
Problem: Maximum Path Sum (Part 2)

Print the path that leads to the maximum path sum in the binary tree
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

// Helper function to find max sum path from root to leaf
void findMaxSumPath(Node* node, int currentSum, int& maxSum, vector<int>& currentPath, vector<int>& maxPath) {
    
    
}

int main() {
    /*
            10
           /  \
          7    15
         / \
        3   9
    */
    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(9);

    return 0;
}


















































