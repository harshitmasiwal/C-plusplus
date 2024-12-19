#include <iostream>
using namespace std;

// by changing the links

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

int main()
{

    node *head = NULL;

    for (int i = 1; i < 10; i++)
    {
        if (head == NULL)
        {
            head = new node(i);
        }
        else
        {
            node *temp = new node(i);
            temp->next = head;
            head = temp;
        }
    }

    cout << "before reversing " << endl;

    // printing
    node *display = head;
    if (display == NULL)
    {
        cout << "underflow";
    }
    while (display != NULL)
    {
        cout << display->data << " ";
        display = display->next;
    }

    cout <<endl<< "after reversing " << endl;


    node * prev = NULL;
    node * current = head;
    node * future = NULL;

    while(current != NULL){

        future = current->next;
        current->next = prev;

        prev = current;
        current = future;

    }

    head = prev;

        // printing
    display = head;
    if (display == NULL)
    {
        cout << "underflow";
    }
    while (display != NULL)
    {
        cout << display->data << " ";
        display = display->next;
    }





}