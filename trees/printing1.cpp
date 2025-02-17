#include<iostream>
#include<queue>
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

void preorder(node * root){

    if(root == NULL) return;

    cout<<root->data<<" ";    //node
    preorder(root->left); //left
    preorder(root->right); //right

}

void inorder(node * root){

    if(root == NULL) return;

    inorder(root->left); //left
    cout<<root->data<<" ";     //node
    inorder(root->right); //right
 
}

void postorder(node * root){

    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";   

}

void levelorder(node *root ,vector<int>&ans,queue<node*>&temp){

    if(temp.empty()){
        return ;
    }

    ans.push_back(root->data);
    // node * t = temp.front();
    // ans.push_back(t->data);
    temp.pop();
    temp.push(root->left);
    temp.push(root->left);

    levelorder(temp.front(),ans,temp);

    return ;
}


int main(){

    //time complextiy of this code for creating the tree order(n)
    //space complextiy of this code for creating the tree order(height) in wrost case if tree is growing only one side then space complexity is order(nodes)    

    cout<<"Enter the root node : ";
    node * root;
    root = BinaryTree();

    //printing code for pre order traversal  (NLR)

    cout<<"\nPreOrder of the above tree : ";
    preorder(root); 

    cout<<"\nInOrder of the above tree : ";
    inorder(root); 

    cout<<"\nPostOrder of the above tree : ";
    postorder(root); 


    vector<int>ans;
    queue<node*>temp;
    temp.push(root);
    cout<<"\nlevel order of the above tree :";
    levelorder(root,ans,temp);
    for(int i = 0 ; i< ans.size() ; i++){
        cout<<ans[i]<<" ";
    }

}