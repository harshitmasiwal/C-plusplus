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

    int arr[10] = {1,2,3,4,8,6,7,8,9,0};

    //insertion at end 
    //initialiszation

    node * head = NULL;
    node * tail = NULL;

    //list doesnt exist 

    for(int i = 0 ; i < 10 ; i++){

    if(head==NULL){
        head = new node(arr[i]);
        tail = head;
    }
    //already exist
    else{
        node *temp = new node(arr[i]);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;

    }
    }

    //traverse 
    node * traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
        
    }

}