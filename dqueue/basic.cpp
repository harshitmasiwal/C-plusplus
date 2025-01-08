#include<iostream>
using namespace std;

//using linked list implementation 

class node{
    public:
    node * prev ;
    int data ;
    node * next ;

   
    node(int x){
        this->data = x;
        this->next = NULL;
        this->prev = NULL;
    }
};

class dqueue{
    node * front ; 
    node * rear; 

    public:
    //constructor
    dqueue(){
        front = NULL;
        rear = NULL;
        cout<<"your dqueue is created sucessfully ! \n";
    }
    //push in front
    void push_front(int x){
        if(front == NULL){
            front = rear = new node(x); //first node creation 
            cout<<x<<" is pushed at front of the queue \n";
            return ;
        }
        else{
            node * temp = new node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout<<x<<" is pushed at front of the queue\n";
            return;
        }
    }
    //push in back
    void push_back(int x){
        if(front == NULL){
            front = rear = new node(x);
            cout<<x<<" is pushed at back of the queue\n";
            return ;
        }
        else{
            node * temp = new node(x);
            rear->next = temp ; 
            temp->prev = rear;
            rear = temp;
            cout<<x<<" is pushed at back of the queue\n";
            return;
        }
    }
    //pop from front
    void pop_front(){
        if(front == NULL){
            cout<<"dqueue is empty\n";
            return;
        }
        else{
            node * temp = front; 
            front = front->next;
            cout<<temp->data<<" is poped from front of the queue\n";
            delete temp ;
            if(front){
                front->prev = NULL;
            }
            else{
                rear = NULL;
            }
        }
    }
    //pop from back 
    void pop_back(){
        if(front == NULL){
            cout<<"dqueue is empty\n";
            return;
        }
        else{
            node * temp = rear ;
            rear = rear->prev;
            cout<<temp->data<<" is poped from back of the queue\n";
            delete temp;
            if(rear){
                rear->next = NULL;
            }
            else{
                front = NULL;
            }
        }
    }
    //element from start 
    int start(){
        if(front){
            return front->data;
        }
        else{
            return -1;
        }
    }
    //element from back 
    int end(){
        if(rear){
            return rear->data;
        }
        else{
            return -1;
        }
    }

};

int main(){

    dqueue d;
    d.push_back(5);
    d.push_front(8);
    d.pop_back();
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;
    d.pop_back();
    d.pop_front();
    d.pop_back();
    d.pop_front();

}