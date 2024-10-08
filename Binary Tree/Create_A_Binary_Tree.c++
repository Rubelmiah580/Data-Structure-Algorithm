//Only for Create_A_Binary_tree
#include<iostream>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
};
Node* create(){                 // Create function for Create a Binary tree;
        int x;
        Node *newnode;        
        newnode = new Node();   // dynamically memory allocate for a Node
        cout<<"Enter your data(Enter -1 for No Node!): ";
        cin>>x;
        if(x==-1){
            return 0;
        }
        newnode->data = x;
        cout<<"Create left child Node"<<endl;
        newnode->left = create();            //recursive call
        cout<<"Create Right child Node"<<endl;
        newnode->right = create();    // recursive call
        return newnode;
}


int main(){
        Node *root;
        root = create();    // call the create function
}