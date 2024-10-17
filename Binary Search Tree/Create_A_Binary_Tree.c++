#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
};
Node*  create_Binary_search_tree(){
    Node *temp,*newnode,*root=NULL;
    int i,n;
    cout<<"Enter How many number of Node are you want to add The BST: ";
    cin>>n;
for(int i = 0;i<n;i++){
newnode = new Node();
cout<<"Enter your data: ";
cin>>newnode->data;
newnode->left=NULL;
newnode->right=NULL;
if(root==NULL){
root=newnode;
}
else{
     while(true){
    temp=root;
    if(newnode->data < temp->data){
        if(temp->left==NULL){
        temp->left=newnode;
         break;
                }
         temp = temp->left;
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
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main() {
    Node *bstRoot = create_Binary_search_tree();
    cout<<"After inorder Traversal: ";
    inorder(bstRoot);
}
