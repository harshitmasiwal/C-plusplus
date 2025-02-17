#include<iostream>
#include<queue>
using namespace std;

//basic implementation 

class node{

    public:

    int data ;
    node * left ; 
    node * right ;

    node(int value){
        this->data = value ;
        this->left = NULL;
        this->right = NULL;
    }
};

int main(){
    
    queue<node*>q;
    //create root node 
    int x;
    cout<<"\nenter the root node : ";
    cin>>x;

    node * root = new node(x);
    q.push(root);

    while(!q.empty()){

        int first , second ;

        node * temp = q.front();
        q.pop();

        cout<<"\nenter the value of left child of "<<temp->data<<" : ";
        cin>>first;          //left side 
        if(first != -1){
            temp->left = new node(first);
            q.push(temp->left);
        }

        cout<<"\nenter the value of right child "<<temp->data<<" : ";
        cin>>second;          //left side 
        if(second != -1){
            temp->right = new node(second);
            q.push(temp->right);
        }



    }


    

}