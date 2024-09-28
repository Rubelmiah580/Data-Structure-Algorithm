#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *head = NULL,*temp,*newnode;  //global pointer 
int count = 0;   // global variable;
void create_node_insert_end(){
    newnode = new Node();
    cout<<"Enter your data:";
    cin>>newnode->data;
    newnode->next = NULL;
    if(head == NULL){
        head = temp = newnode;
    }
    else{
        temp->next=newnode;
        temp = newnode;
    }
    count++;
}

void insert_node_any_position(){
    
    int i=1,pos;
    cout<<"Which position your insert a node?: ";
    cin>>pos;
    if(pos>count){
        cout<<"Invalid position"<<endl;
        return;
    }
    else{    
        newnode = new Node();
        cout<<"Enter your data:";
        cin>>newnode->data;
        newnode->next = NULL;
        temp = head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        count++;
    }

}

void display(){
    temp = head;
    cout<<"Linked list after insert a Node at a position ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n The total element of this Linked list = "<<count<<endl;
}

int  main(){
    char c;
    while(1){
    cout<<" Press 'Y' for create node and add this node end of the linked list :";
    cout<<"\n Press 'I' for insert node at expected position :";
    cout<<"\n Press any key for exit:";
        cin>>c;
        if(c=='y'){
            create_node_insert_end();
        }
       else  if(c=='i'){
            insert_node_any_position();
        }
        else{
            break;
        }
    }
    display();
}