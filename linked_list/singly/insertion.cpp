#include<iostream>
using namespace std;

class node {

    public:


    int data ;
    node *next;

    node(int value){
        this->data = value;
        this->next = NULL;
    }

};

int main(){

    node * head = new node(10);

    // //insertion of node at beggning 
    // node * update = new node(11);
    // //adding in the linked list 
    // update->next = head;
    // head = update;

    //inserting the numbers in linked list using loops
    for(int i = 1 ; i < 10 ; i++){
        node * update = new node(i);
        update->next = head;
        head = update;

    }


    node * temp = head;
    while(temp != NULL){
        
        cout<<temp->data<<" -> ";
        temp = temp->next;

    }

}