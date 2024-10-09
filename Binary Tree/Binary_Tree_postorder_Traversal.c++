#include<iostream>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
};

Node* create(){      // Create function for Create a binary tree
    int x;
    Node *newnode;    
    newnode = new Node();  // Dynamically memory Allocated for a Node
    cout<<"Enter Your data (Enter -1 for No Node!): ";
    cin>>x;
    if(x==-1){
        return 0;
    }
    newnode->data = x;
    cout<<"Create left Child Node of "<<x<<endl;
    newnode->left = create();     // recursive call for left node
    cout<<"Create right Child Node of "<<x<<endl;
    newnode->right= create();    // recursive call for right node
    return newnode;
}
void postorder(Node *root){    // for Travers a Tree into in_order
        if(root==0){
            return;
        }
    postorder(root->left); 
    postorder(root->right);   // recursive call
    cout<<root->data<<" ";     // recrusive call
    
}


int main(){
    Node *root;
    root = create();
    cout<<"post-order is:";
    postorder(root);

}