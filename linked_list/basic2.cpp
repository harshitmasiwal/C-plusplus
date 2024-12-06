#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node *next;

    node(int value){
        this->data = value;
        this->next = NULL;
    }
};    

int main(){

    //dynamic creation 

    node * head;
    // head = new node;

    // head->data = 10;
    // head->next = NULL;

    ///using constructor
    head = new node(11);


}