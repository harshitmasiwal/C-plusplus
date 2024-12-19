#include<iostream>
using namespace std;

//deletion at the starting 

class node{
    public:
    int data;
    node * prev;
    node * next;

    node(int value){
        this->data = value;
        prev = NULL;
        next = NULL;
    }

};

int main(){

    node * head = NULL;
    for(int i = 1 ; i < 10 ; i++){
        if(head == NULL){
            head = new node(i);
        }
        else{
            node * temp = new node(i);
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
    }

    cout<<"before deletion : "<<endl;
    //traverse 
    node * traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
        
    }

     cout<<endl<<"before deletion : "<<endl;

     node * temp = head;
     temp->next->prev = NULL;
     head = temp->next;
     delete temp;
    //traverse 
    traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
        
    }

}