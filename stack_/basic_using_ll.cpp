#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};

class stack{
    node * top;
    int size;
    public:
    stack(){
        top = NULL;
        size = 0;
    }

    //push
    void push(int value){
        node * temp = new node(value);
        temp->next = top;
        top = temp;
        size++;
        cout<<"pushed "<<value<<" into stack"<<endl;
    }
    //pop
    void pop(){
        if(top == NULL) { 
            cout<<"stack underflow"<<endl;
        }
        else{
            cout<<"poped "<<top->data<<" from stack"<<endl;
            node * temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }
    //peek
    int peek(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    };
    //isEmpty
    bool isEmpty(){
        return top==NULL;
    }
    //isSize
    int isSize(){
        return this->size;
    }

};

int main(){

    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.isEmpty();

}