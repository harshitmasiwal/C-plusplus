#include<iostream>
using namespace std;

//using array implementation 


class dqueue{


    int front , rear , size ; 
    int * arr;

    public:
    //constructor
    dqueue(int n){
        size = n ;
        this->arr = new int[size];
        front = rear = -1;
        cout<<"your dqueue is created sucessfully ! \n";
        return ;
    }
    //isempty 
    bool isEmpty(){
        return front == -1;
    }
    //isfull
    bool isFull(){
        return front == (rear+1)%size;
    }
    //push in front
    void push_front(int x){
        if(isEmpty()){
            front = rear = 0 ;
            arr[0] = x;
            cout<<x<<" is pushed at front of the queue \n";
            return ;
        }
        else if(isFull()){
            cout<<"your queue is overflowed!\n";
            return ; 
        }
        else{
            front = (front-1+size)%size;
            arr[front] = x ;
            cout<<x<<" is pushed at front of the queue \n";
            return ;
        }
    }
    //push at back 
    void push_back(int x){
        if(isEmpty()){
            front = rear = 0 ;
            arr[0] = x;
            cout<<x<<" is pushed at back of the queue \n";
            return ;
        }
        else if(isFull()){
            cout<<"your queue is overflowed!\n";
            return ;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = x; 
            cout<<x<<" is pushed at back of the queue \n";
            return ;
        }
    }
    //pop from front
    void pop_front(){
        if(isEmpty()){
            cout<<"dqueue is empty\n";
            return;
        }
        else{
            if(front == rear){
                cout<<arr[front]<<" is poped from front of the queue\n";
                front = rear = -1; 
                return ;
            }
            else{
                cout<<arr[front]<<" is poped from front of the queue\n";
                front = (front+1)%size;
                return ; 
            }
        }
    }
    //pop from back
    void pop_back(){
        if(isEmpty()){
            cout<<"dqueue is empty\n";
            return;
        }
        else{
            if(front == rear){
                cout<<arr[rear]<<" is poped from back of the queue\n";
                front = rear = -1 ;
                return ;
            }
            else{
                cout<<arr[rear]<<" is poped from back of the queue\n";
                rear = (rear - 1 + size)%size;
                return ;
            }
        }
    }
    //start
    int start(){
        if(front == -1){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    //end
    int end(){
        if(rear == -1){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

};

int main(){


    dqueue d(5);
    d.push_back(10);
    d.push_back(91);
    d.push_back(9);
    d.push_front(18);
    d.pop_back();
    d.pop_front();
    cout<<d.start();
    


}