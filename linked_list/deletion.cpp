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

    for(int i = 1 ; i < 10 ; i++){

        if(head == NULL){
            head = new node(i);
        }
        else{
            node * temp = new node(i);
            temp->next = head ;
            head = temp;
        }

    }


    //deletion at beggning 
    if(head != NULL){
    node * temp = head;
    head = head->next;
    delete(temp);
    }

    //its deletes the 9th one






    //printing 
    node * display = head ;
    while(display != NULL){
        cout<<display->data<<" ";
        display = display->next;
    }


}