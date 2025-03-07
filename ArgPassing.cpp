#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node * next;

    // constructor
    // to initialize data as input
    // to initialize next ptr as null 
    Node (const string& input) : data(input), next(nullptr) {}
};


class LinkedList {
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

            // Declare current ptr and set it to point to the same node hear ptr is pointing at
            Node * current;
            current = head;

            // move current ptr to point to the same node the next ptr of the current node is pointing at
            // while the next ptr of the current node is not pointing to null, keep shifting current ptr            
            while(current -> next != nullptr)
            {
                current = current  -> next;
            }

            current -> next = newNode; 

        }

        void DisplayNodesData()
        {
            Node * current;
            current = head;

            cout << curent -> data
                current = 
        }
    }
};

int main()
{   
    LinkedList LL;
    LL.append("make a sandwich");
    LL.append("make another sandwich ")
    LL.append("Eat all the sandwiches")
    LL.append("pour a glass of blood")
    LL.DisplayNodesData()


    return 0;
}
