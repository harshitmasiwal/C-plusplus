#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *root, int data)
{

    // base case
    if (!root)
    {
        Node *temp = new Node(data);
        return temp;
    }
    // left mai jaoo
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    // right mai jaoo
    if (data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root ;
}

void inorder(Node *root)
{
    if (!root)
    {
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

bool search(Node * root , int target){

    if(!root){
        return 0 ;
    }
    if(root->data == target){
        return 1 ;
    }
    if(root->data > target){
        return search(root->left,target);
    }    
    if(root->data < target){
        return search(root->right,target);
    }


}

int main()
{

    int arr[10] = {6, 3, 13, 42, 13, 45, 23, 54, 11, 1};
    Node *root = NULL;

    for (int i = 0; i < 10; i++)
    {
        root = insert(root, arr[i]);
    }

    // traverse
    //inorder(root);

    //searching in this bst 

    int target = 11;

    cout<<search(root,target); 

}