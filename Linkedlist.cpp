#include <iostream>
#include <string>
using namespace std;

struct Node 
{
    string data;
    Node * next;

    // constructor
    // to initialize data as input
    // to initialize next ptr as null 
    Node (const string& input) : data(input), next(nullptr) {}
};


class LinkedList 
{
private:
    Node * head;

public:
    // constructor
    // to initialize head ptr as null
    LinkedList() : head(nullptr) {}

    void append(const string& input)
    {
        // create a new Node
        // set newNode ptr to point to the newly created node
        Node * newNode = new Node(input);

        // check if the linked list is currently empty
        if(head == nullptr)
        {
            // set head ptr to point to the same node that newNode ptr is pointing at
            head = newNode;
        
        } else
        {
            // else if it is not empty
            // traverse the linked list to get to the destination where the new node has to be added
            
            // Declare current ptr and set it to point to the same node head ptr is pointing at
            Node * current;
            current = head;

            // move current ptr to point to the same node the next ptr of the current node is pointing at
            // while the next ptr of the current node is not pointing to null, keep shifting current ptr
            while(current -> next != nullptr)
            {
                current = current -> next;
            }

            current -> next = newNode;
        }  
    }

    void DisplayNodesData()
    {
        Node * current;
        current = head;

        while(current != nullptr)
        {
            cout << current -> data << endl;
            current = current -> next;
        }
    }

    void InsertNodeAtPos(const string& NodeData, int pos)
    {
        // create a new Node
        // create a new ptr called NewNode and set it to point to the just created node
        Node * NewNode = new Node(NodeData);

        // if the list is currently empty or pos is 0
        // add the new node to the forefront position
        if(head == nullptr || pos == 0)
        {
            NewNode -> next = head;
            head = NewNode;   
            return;
        }

        // if it is some other positions,
        // we will have to traverse the list to get to where the node has to be inserted
        Node * current;
        current = head;
        int index = 0;

        while(index < pos - 1)
        {
            current = current -> next;
            index++;
        }

        // Once the location is identified, insert the new node
        NewNode -> next = current ->  next;
        
    }
};





int main()
{   
    LinkedList LL;
    LL.append("make a sandwich");
    LL.append("make another sandwich");
    LL.append("Eat all the sandwiches");
    LL.append("pour a glass of milk");

    LL.DisplayNodesData();

    cout << endl;

    LL.InsertNodeAtPos("purchase a ticket to lady gaga's concert", 2);
    LL.DisplayNodesData();

    return 0;
}
