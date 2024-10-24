#include<iostream>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    Node *right;
};

Node *insert(Node *root,int data){       // Function for Insert Node into It's Position 
    Node *newnode;
    if(root==NULL){
        newnode = new Node ();  // Dynamically Memory allocate using new();
        newnode->data = data;      
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }

    if(data < root->data){
        root->left=insert(root->left,data);     //Recursive call
    }
    else if(data > root->data){
        root->right = insert(root->right,data);  //Recursive call
    }

    return root;
}


Node *create_BST(){
    int data,n;
    Node *root=NULL;
    cout<<"How many Node are you want to insert this BST: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Enter your data: ";
        cin>>data;
        root = insert(root,data);

    }

    return root;
}

Node *find_min(Node *root){    // function for find the minimum value fo a right subtree 
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node *delete_Node(Node *root,int num){   // function for delete parent node or child node 
    if(root==NULL){
        return root;
    }
    if(num < root->data){
        root->left=delete_Node(root->left,num);
    }
    else if(num > root->data){
        root->right=delete_Node(root->right,num);
    }
    else{ 
        // if node have no child or one child
        if(root->left==NULL){   
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node *temp = root->left;
            delete root;
            return temp;

        }
        // if a node have two childrean 
    Node *temp =find_min(root->right);  // call find_min()
        root->data = temp->data;
        root->right=delete_Node(root->right,temp->data);

    }
    return root;

}

void inorder_Traverse(Node *root){       // Function for Traverse BST // if I Traverse BST Inorder Mehtoh the BST are sorted automatically
    if(root==NULL){
        return;

    }
    inorder_Traverse(root->left);   //Recursive call
    cout<<root->data<<" ";
    inorder_Traverse(root->right);   //Recursive call
}

int main(){
    Node *bstroot;
    bstroot=create_BST();
    inorder_Traverse(bstroot);
    int num;
    cout<<"\nEnter the value which you want to delete: ";
    cin>>num;
    delete_Node(bstroot,num);
    cout<<"BST after deletion: ";
    inorder_Traverse(bstroot);

    return 0;
}
