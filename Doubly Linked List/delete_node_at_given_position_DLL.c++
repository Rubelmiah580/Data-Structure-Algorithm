#include<iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};
Node *head=NULL,*tail,*newnode; // Global pointer
int count=0;     //Global variable

void create_node(){
    newnode = new Node();
    cout<<"Enter your data:"<<endl;
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next = NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail = newnode;
    }
  count++;
}

void delete_node_at_given_position_DLL(){
    int pos,i=1;
    Node *temp=head;
    cout<<"Which positonal Node you want to delete?: ";
    cin>>pos;
    if(pos<1 || pos>count+1){
        cout<<"Invalid position!"<<endl;
        return;
    }
    else{
        while(i<pos){
            temp=temp->next;
            i++;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        free(temp);
        cout<<"Sucessfully delete!"<<endl;
         
    }
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
       cout<<"Press 2 for delete node at given position of DLL:"<<endl;
       cout<<"Press any key for exit!"<<endl;
       cin>>n;
       if(n==1){
        create_node();
       }
       else if(n==2){
        delete_node_at_given_position_DLL();
       }
    else{
        break;
    }
    }
    display();   // call disply for print the doubly linked 
    
}
