#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node * next;

    node(int val){
        this->data = val;
        this->next = NULL;
    }
};

int main(){

    node * head = NULL;

    for(int i=0 ; i < 10 ; i++){

        if(head == NULL){
            head = new node(i);
        }
        else{
            node * temp = new node(i);
            temp->next = head;
            head = temp;  
        }
    }



    //deletion at mid of array 

    int target = 6;
    
    if(target == 1){
        node * temp = head ;
        head = temp->next;
        delete temp;
    }
    else{
        target--;
        node * temp = head;
        node * prev = NULL;
        while(target != 0){
            prev = temp;
            temp = temp->next; 
            target--;
        }
        prev->next = temp->next;
        delete temp;
    }


    
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