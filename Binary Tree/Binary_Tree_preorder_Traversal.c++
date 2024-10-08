#include<iostream>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
};

Node* create(){
    int x;
    Node *newnode;
    newnode = new Node();
    cout<<"Enter Your data (Enter -1 for No Node!): ";
    cin>>x;
    if(x==-1){
        return 0;
    }
    newnode->data = x;
    cout<<"Create left Child Node of "<<x<<endl;
    newnode->left = create();
    cout<<"Create right Child Node of "<<x<<endl;
    newnode->right= create();
    return newnode;
}
void preorder(Node *root){
        if(root==0){
            return;
        }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    Node *root;
    root = create();
    cout<<"Pre-order is:";
    preorder(root);

}