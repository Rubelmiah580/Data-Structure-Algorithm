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
        root->left=insert(root->left, data); // recursive call
    }
    else if(data > root->data){
        root->right=insert(root->right,data); // recursive call
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
Node *BST_Search(Node *root){        // function for search a data from BST
    int item;
    cout<<"Enter your searching data: ";  
    cin>>item;
    Node *temp = root;
    while(temp!=NULL){
        if(item==temp->data){
            return temp;
        }
        if(item < temp->data){
            temp = temp->left;
        }
        else if(item > temp->data){
            temp= temp->right;
        }
    }
    return temp;


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
    Node *BSTroot,*findNode;
    BSTroot=create_BST();
    cout<<"BST After inorder_traverse: "<<endl;
    inorder_Travers(BSTroot);
    while(1){
        int n;
        cout<<"\nPress 1 for Search a Data: "<<endl;
        cout<<"Press any key  for exit: "<<endl;
        cin>>n;
        if(n==1){
           findNode= BST_Search(BSTroot);
           if(findNode!=NULL){
            cout<<"Item is found: "<<endl;
           }
           else{
            cout<<"Item isn't found: "<<endl;
           }
        }
        else{
            break;
        }
    }

}
