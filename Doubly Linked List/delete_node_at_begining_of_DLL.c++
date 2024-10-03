#include<iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};
Node *head = NULL,*newnode,*tail; // Global pointer
int count=0; // global variable for count the total node

void create_node(){
    newnode=new Node(); // dynamically memory allocated
    cout<<"Enter your data"<<endl;
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head =  tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev=tail;
        tail = newnode;
    }
    count++;
}

void delete_node_at_begining_of_DLL(){
        Node *temp;
        temp = head;                              // Time complexity for delete node at begining = O(1)
        head = head->next;                        // Space complexity = O(1)
        head->prev=NULL;
        free(temp);
        cout<<"Sucessfully deleted!"<<endl;
}

void display(){
    Node *traverse;
    traverse=head;
    while(traverse!=NULL){
        cout<<traverse->data<<" ";
        traverse=traverse->next;
    }
    cout<<endl;
}

int main(){
    int n;
    while (1)
    {
       cout<<"Press 1 for create node:"<<endl;
       cout<<"Press 2 for delete node at begining of DLL:"<<endl;
       cout<<"Press any key for exit!"<<endl;
       cin>>n;
       if(n==1){
        create_node();
       }
       else if(n==2){
        delete_node_at_begining_of_DLL();
       }
    else{
        break;
    }
    }
    display();   // call disply for print the doubly linked 
    
}