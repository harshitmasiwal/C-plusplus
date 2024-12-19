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
    node * tail = NULL;

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
        tail = traverse ;
        traverse = traverse->next;
        
        
    }

    cout<<endl<<"after reversing : "<<endl;
    // node * temp = head;
    // while(temp->next != tail->prev){
    //     int tempdata = temp->data;
    //     temp->data = tail->data;
    //     tail->data = tempdata;
    //     temp = temp->next;
    //     tail = tail->prev;
    // }


    node * temp = head;
    while(temp->next != tail->prev){    

        node * temp1= temp->next;
        node * temp2= tail->next;
        node * temp3= temp->prev;
        node * temp4= tail->prev;
        swap(temp1,temp2);
        swap(temp3,temp4);



        temp = temp->next;
        tail = tail->prev;


    }



     //traverse 
    traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        tail = traverse ;
        traverse = traverse->next;
        
        
    }








}