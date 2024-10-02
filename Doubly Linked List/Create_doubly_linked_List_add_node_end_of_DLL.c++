#include<iostream>
using namespace std;
class Node{         
    public:
    Node *prev;
    int data;
    Node *next;
};
Node *head=NULL,*tail,*newnode;    // Global variable 

void create_node_and_insert_end_of_DLL(){
    newnode= new Node();      //dynamically memory allocated;
    cout<<"Enter your data:"<<endl;
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head = tail = newnode;              // Time complexity for insert end of DLL = O(1)
    }                                        // Space compexity = O(1)
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail = newnode;
    }
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
    cout<<"Enter 1 for create node and insert it end of DLL:";
    cout<<"Press any key for exit ";
    cin>>n;
        if(n==1){
            create_node_and_insert_end_of_DLL();
        }
        else{
            break;
        }
    }
    display();   //call display for print the DLL
}