#include<iostream>
using namespace std;

class stack{
    int * arr ;
    int size ;
    int top ;
    
    public:
    int flag ; //if flag = 1 it means stack is empty
    //constructor
    stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
        flag = 1 ;
    }

    //functions for stack   
    //push
    void push(int data){
        if(top == size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = data;
            cout<<"pushed "<<data<<" into stack"<<endl;
            flag = 0;
        }
    }
    //pop
    void pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            cout<<"poped "<<arr[top]<<" from stack"<<endl;
            top--;
            if(top==-1){
                flag = 1;
            }
        }
    }
    //showtop
    int peek(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    //isEmpty
    bool isEmpty(){
        return top==-1;
    }
    //isSize
    int isSize(){
        return top+1;
    }


};


int main(){

    // stack bread(5);
    // bread.push(0);
    // bread.push(9);
    // bread.push(8);
    // bread.push(7);
    // bread.push(6);
    // bread.pop();
    // bread.pop();
    // cout<<bread.isSize()<<endl;
    // cout<<bread.peek()<<endl;
    // bread.pop();
    // bread.pop();
    // bread.pop();
    // bread.pop();
    
    // cout<<bread.isEmpty()<<endl;

    stack bread(5);
    // bread.push(-1);
    // cout<<bread.peek(); to aviod this confusion 
    //we use the flag 

    int value = bread.peek();
    if(bread.flag == 0){
        cout<<value<<endl;
    }


}