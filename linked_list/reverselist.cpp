#include <iostream>
#include<vector>
using namespace std;

//by changing the value

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
        else{
            node * temp = new node(i);
            temp->next = head;
            head = temp;
        }
    }

    cout<<"before reversing "<<endl;

       //printing 
    node * display = head ;
    if(display == NULL){
        cout<<"underflow";
    }
    while(display != NULL){
        cout<<display->data<<" ";
        display = display->next;
    }



    cout<<endl<<"after reversing "<<endl;

    vector<int>arr;

    node*temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int last_index = arr.size() - 1;

    temp = head;
    while(temp!=NULL){
        temp->data = arr[last_index];
        temp = temp->next;
        last_index--;
    }


       //printing 
    display = head ;
    if(display == NULL){
        cout<<"underflow";
    }
    while(display != NULL){
        cout<<display->data<<" ";
        display = display->next;
    }




}