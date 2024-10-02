#include<iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};
Node *head=NULL,*tail,*newnode;     // Global variable 

void create_node(){
    newnode= new Node();    //dynamically memory allocated;
    cout<<"Enter your data:"<<endl;
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head = tail = newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail = newnode;
    }
}
void insert_node_at_begining_of_DLL(){
        newnode=new Node();
        cout<<"Enter your data:"<<endl;
        cin>>newnode->data;
        newnode->prev=NULL;                 // Time complexity  for  Insert node at begining of DLL = O(1)
        newnode->next=head;                 // Space complexity = O(1)  
        head->prev = newnode;
        head = newnode;
}

void display(){
    tail = head;
    cout<<"The doubly Linked list are: "<<endl;
    while(tail!=NULL){                                      // Time complexity for display = O(n)
        cout<<tail->data<<" ";                              // Space complexity = O(1)
        tail=tail->next;
    }
    cout<<endl;
}
int main(){
    int n;
    while(1){
    cout<<"Enter your choice: "<<endl;
    cout<<"Enter 1 for create node "<<endl;
    cout<<"Enter 2 for insert begining of DDL"<<endl;
    cout<<"Press any key for exit ";
    cin>>n;
        if(n==1){
            create_node();
        }
        else if(n==2){
            insert_node_at_begining_of_DLL();
        }
        else{
            break;
        }
    }
    display();   //call display for print the DLL
}