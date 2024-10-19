#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

};

Node *insert(Node *root, int data){ // Function for Insert Node into It's Position 
    Node *newnode;
        if(root==NULL){
            newnode=new Node();    // Dynamically Memory allocate using new();
            newnode->data=data;
            newnode->left=NULL;
            newnode->right=NULL;
            return newnode;
        }
    if(data < root->data){
        root->left=insert(root->left,data);   //Recursive call
    }
    else if(data > root->data){
        root->right=insert(root->right,data); // Recursive call
    }

return root;   //Return first node address/Root Node address

}

Node *create_BST(){   // Function for create a BST
    Node *root=NULL;
    int n,data;
    cout<<"How many Node are your want to your BST: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Enter your data: ";
        cin>>data;
        root=insert(root,data);
    }
return root;

}

void inorder_Travers(Node *root){       // Function for Traverse BST // if I Traverse BST Inorder Mehtoh the BST are sorted automatically
    if(root==NULL){
        return;
    }
    inorder_Travers(root->left);   // Recursive call
    cout<<root->data<<" ";
    inorder_Travers(root->right);   // Recursive call

}

int main(){
    Node *BSTroot;
    BSTroot=create_BST();
    cout<<"BST After inorder_traverse: "<<endl;
    inorder_Travers(BSTroot);
    cout<<endl;

}