#include<iostream>
using namespace std;

class node{
   public:

    int data;
    node * next;

    node(int value){
        this->data = value ;
        next = NULL;
    }

};

class queue{

    node * front;
    node * rear ;
    public: 

    queue(){
        front = rear = NULL;
    }

    //queue is empty or not

    bool IsEmpty(){
        return front==NULL;
    }

    //push element in the queue

    void push(int x){

        if(IsEmpty()){
            front = rear = new node(x);
            cout<<"pushed "<<rear->data<<" into the queue \n ";
            return ;
        }
        else{
            rear->next = new node(x);
            rear = rear->next;
            cout<<"pushed "<<rear->data<<" into the queue \n ";
        }

    }

    void pop(){

        if(IsEmpty()){
            cout<<"Queue underflow ! \n";
        }
        else{
            cout<<"poped "<<front->data<<" from the queue \n ";
            node * temp = front ;
            front = front->next;
            delete temp;
        }
    }

    int start(){

        if(IsEmpty()){
            cout<<"queue is empty ! \n";
            return -1;
        }
        else{
            return front->data;
        }
    }

};

int main(){ 

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.start();

}