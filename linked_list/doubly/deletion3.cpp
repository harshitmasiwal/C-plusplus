#include<iostream>
using namespace std;

//deletion at the middle

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

    cout<<endl<<"after deletion : "<<endl;


    int pos = 4;
    node * temp = head;

    while(--pos){
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;

    //traverse 
    traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
        
    }
    

}