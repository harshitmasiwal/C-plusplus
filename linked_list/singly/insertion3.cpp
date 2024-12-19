#include<iostream>
using namespace std;

//insertion ar middle of the linked list 

class node{

    public:
    int data ;
    node * next;
    node(int value){
        this->data = value;
        this->next = NULL;
    }

};

int main(){

    node * head = NULL;
    node * tail = NULL;
    
    for(int i = 1 ; i < 10 ; i++){

        if(i == 5) continue;

        if(head==NULL){
            head = new node(i);
            tail = head;
        }
        else{
            node * temp = new node(i);
            tail->next = temp;
            tail = temp;
            
        }

    }

    //we missed the 5 and want to insert it in linked list 
    //the postion in which we want to insert is 5

    int i = 1 ;
    node * traverse = head;
    while(i < 5-1){
        traverse = traverse->next;
        i++;
    }

    //now we are at the 4th node 

    node * fifth = new node(5);
    fifth->next = traverse->next;
    traverse->next = fifth;

    //the fifth is sucessfully linked with the list 





//printing the linked list 
    node * display = head;
    while(display != NULL){
        cout<<display->data<<" -> ";
        display = display->next;
    }

    
}