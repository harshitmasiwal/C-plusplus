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

    //initialiszation from array
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    node * head = NULL;

    //list doesnt exist 

    for(int i = 9 ; i >= 0 ; i--){

    if(head==NULL){
        head = new node(arr[i]);
    }
    //already exist
    else{
        node *temp = new node(arr[i]);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    }

    //traverse 
    node * traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
        
    }

}