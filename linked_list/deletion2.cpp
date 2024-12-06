#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node * next;

    node(int val){
        this->data = val ;
        this->next = NULL;
    }

};



int main(){

    node * head = NULL;

    for(int i = 1 ; i < 2 ; i++){

        if(head == NULL){
            head = new node(i);
        }
        else{
            node * temp = new node(i);
            temp->next = head ;
            head = temp;
        }

    }


   // deletion at the end 

    node * tail = head;
    node * prevous = NULL;
    while(tail->next != NULL){
        prevous = tail;
        tail = tail->next;  
    }

    
    prevous->next = NULL;
    delete(tail);





    //printing 
    node * display = head ;
    if(display == NULL){
        cout<<"underflow";
    }
    while(display != NULL){
        cout<<display->data<<" ";
        display = display->next;
    }

    


}