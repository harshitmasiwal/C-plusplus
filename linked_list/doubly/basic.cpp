#include<iostream>
using namespace std;

class node{

    public:
    node *prev;
    int data;
    node *next;

    node(int value){
        this->data = value;
        prev = NULL;
        next = NULL;
    };
};

int main(){

    //initialiszation

    node * head = NULL;

    //list doesnt exist 

    if(head==NULL){
        head = new node(4);
    }
    //already exist
    else{
        node *temp = new node(8);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    //traverse 
    node * traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
        
    }

}