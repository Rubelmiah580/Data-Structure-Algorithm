#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
};
Node *insert(Node *root,int data){
    Node *newnode;
    if(root==NULL){
        newnode=new Node();
        newnode->data=data;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    if(data < root->data){
        root->left=insert(root->left, data);
    }
    else if(data > root->data){
        root->right=insert(root,data);
    }
return root;

}

Node *create_BST(){
    int n,data;
    cout<<"How many Node are You want to insert  This BST: ";
    cin>>n;
    Node *root = NULL;
    for(int i =0;i<n;i++){
        cout<<"Enter your data: ";
        cin>>data;
        root = insert(root,data);
    }
    return root;

}
Node *BST_Search(Node *root){
    int item;
    cout<<"Enter your searching data: ";
    Node *temp = root;
    while(temp!=NULL){
        if(item==temp->data){
            return temp;
        }
    }


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
    while(1){
        int n;
        cout<<"Press 1 for Search a Data: "<<endl;
        cout<<"Press any key  for exit: "<<endl;
        cin>>n;
        if(n==1){
            BST_Search(BSTroot);
        }
        else{
            break;
        }
    }

}