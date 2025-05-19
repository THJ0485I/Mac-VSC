// The implementation of Binary Tree data structure

// Example usage: family tree usgae
// The implementation fo Binary Tree data strucutre

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




























