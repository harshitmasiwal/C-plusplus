#include<iostream>
using namespace std;

class node {

    public:

    int data ; 
    node * next ;

    node(int val){
        this->data = val;
        this->next = NULL; 
    }

};

int main(){

    node * head = NULL ;
    node * tail = NULL ;
    //inserting at end of linked list 

    //for this we will use two pointers one head and other one is tail 

    for(int i = 1 ; i < 10 ; i++){
    if(head == NULL){
        head = new node(i);
        tail = head;
    }
    else{
        node * temp = new node(i);
        tail->next = temp ;
        tail = temp;
    }
    }



    //displayiing the linked list 
    node * temp = head ;
    while(temp!= NULL){

        cout<<temp->data<<" -> ";
        temp = temp->next;

    }


}