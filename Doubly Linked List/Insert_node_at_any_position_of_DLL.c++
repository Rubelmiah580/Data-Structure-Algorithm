#include<iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};
Node *head=NULL,*newnode,*tail;   // Global pointer
int count=0;   // for count the totall number of Node
void create_node(){
        newnode=new Node();  // dynamically memory allocated
        cout<<"Enter your data:"<<endl;
        cin>>newnode->data;
        newnode->prev=NULL;
        newnode->next = NULL;
        if(head==NULL){
            head = tail = newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    count++;
}

void insert_node_at_any_position_of_DLL(){
        int i=1,pos;
        Node *temp;
        cout<<"Whic position are you insert this node? ";
        cin>>pos;
        if(pos<1 || pos>count+1){
            cout<<"Invalid position!"<<endl;
            return;
        }
        else{                                       // Time complexity for insert node at any position = O(n)
            newnode=new Node();                     // Space complexity = O(1)
            cout<<"Enter your data"<<endl;
            cin>>newnode->data;
            temp = head;
        while (i<pos-1)
        {
           temp = temp->next;
           i++;
        }
        temp->next->prev=newnode;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;

    }
        
}

void display(){
    tail = head;
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
}
int main(){
    int n;
    while (1)
    {
       cout<<"Press 1 for create node"<<endl;
       cout<<"Press 2 for insert node at given position"<<endl;
       cout<<"Press any key for exit!"<<endl;
       cin>>n;
       if(n==1){
        create_node();
       }
       else if(n==2){
        insert_node_at_any_position_of_DLL();
       }
    else{
        break;
    }
    }
    display();   // call disply for print the doubly linked 
    
}