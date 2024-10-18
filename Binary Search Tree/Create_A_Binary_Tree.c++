#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
};

Node* create_BST(){
    Node *root=NULL,*temp,*newnode;
    int n;
    cout<<"How many Node are you want for Creata a BST: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        newnode=new Node();
        cout<<"Enter your data: ";
        cin>>newnode->data;
        newnode->left=NULL;
        newnode->right=NULL;
        if(root==NULL){
            root=newnode;
        }
        else{
            temp=root;
            while(true){
                if(newnode->data < temp->data){
                    if(temp->left==NULL){
                        temp->left=newnode;
                        break;
                    }
                    else{
                        temp=temp->left;
                    }
                }
                else if(newnode->data > temp->data){
                    if(temp->right==NULL){
                        temp->right=newnode;
                        break;
                    }
                    else{
                        temp=temp->right;
                    }
                }
                else{
                    delete newnode;
                    break;
                }
            }
        }
    }
    return root;
}

void inorder_traverse(Node *root){
    if(root==NULL){
        return;
    }
    inorder_traverse(root->left);
    cout<<root->data<<" ";
    inorder_traverse(root->right);
}

int main(){
    Node *bstroot;
    bstroot=create_BST();
    cout<<"BST after inorder traverse: ";
    inorder_traverse(bstroot);

}
