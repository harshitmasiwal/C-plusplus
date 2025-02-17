#include<iostream>
using namespace std;

//diffrent creation using recurssion 

class node {
    public:
    int data ;
    node*left;
    node*right;

    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

node * BinaryTree(){

    int x;
    cin>>x;
    //if input is -1 then return 
    if(x == -1){
        return NULL;
    }
    //if x!= -1 then create node
    node * temp = new node(x);

    //look for left 
    cout<<"enter the left child of "<<x<<" :";
    temp->left = BinaryTree();

    //look for right
    cout<<"enter the right child of "<<x<<" :";
    temp->right = BinaryTree();

    return temp;

}


int main(){

    //time complextiy of this code for creating the tree order(n)
    //space complextiy of this code for creating the tree order(height) in wrost case if tree is growing only one side then space complexity is order(nodes)

    cout<<"Enter the root node : ";
    node * root;
    root = BinaryTree();

}