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

    //initialiszation
    //insertion in between 
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    node * head = NULL;

    //list doesnt exist 
    cout<<"before insertion"<<endl;
    
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

    cout<<"after insertion"<<endl;
    node *curr = head;
    int position = 10;

    //insertion at first 
    if(position == 0 ){
        if(head == NULL){ 
            head = new node(10);
        }
        node *temp = new node(10);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else{

    //insertion at middle
    while(--position){
        curr = curr->next;
    }
    //insertion at end
    if(curr->next == NULL ){
        node * temp = new node(10);
        temp->prev = curr;
        curr->next = temp;
    }
    else{
        node * temp = new node(10);
        temp->next = curr->next;
        temp->prev = curr;
        curr->next = temp;
        curr->next->prev = temp;
    }
    }




    //traverse 
    traverse = head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
        
    }

}