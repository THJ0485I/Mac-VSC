#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string data;
    Node = next;

    //Constructer
    //To initializ data as input
    // To initialize next ptr as null
    Node (const string& input) : data(input), next(nullptr) {}

};


class LinkedList
{
  private:
    Node * head;
  public:
    //Contructer
    // To initialize head ptr as null
    LinkedList() : head(nullptr} {}

  void Append(const string& input)
  {
    // create a new Node
    Node * newNode =  new Node(input)

  if(head == nullptr)
    {
        //set head ptr to point to the same node that newNode ptr it pointing at
      head = newNode;
      
    }

  }
};
new Node("Get Dressed")


int main()
{
  LinkedList LL_1;
    LL.append("")
    LL.DisplayNodesData();
    LL.InsertNodeAtPos("")

        
  return  0;
}

