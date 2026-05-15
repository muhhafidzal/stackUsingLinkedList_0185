// repo name : stackUsingLinkedList_0185
#include <iostream>
using namespace std;

// Node class representing a single node in the Linked List
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    Node *top; // Pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null pointer
    }

    // Push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. Set the next pointer of the new node
        top = newNode;              // 4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // Pop operation: Remove the topmost element from the stack
    void pop()
    {
    Node *temp = top;
        if (isEmpty())
        {
            cout << " Stack is Empty." << endl;
            return;
        }

        cout << "Popped Value: " << temp->data << endl;
        top = temp->next; // Update the top pointer to the next node 
        delete temp;
    }

    //peek/pop operation.
    void peek()
    {
        if (isEmpty())
        {
            cout << " List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }

    bool isEmpty()
    {
        return top == NULL; //Return true if the top pointer is NULL indicating an empty stack
    }
};