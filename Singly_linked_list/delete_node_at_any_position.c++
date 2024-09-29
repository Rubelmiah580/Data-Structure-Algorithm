#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *head = NULL,*newnode,*temp;
int count=0;
void create_node_and_insert_end(){
    newnode = new Node();
    cout<<"Enter your data: ";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
    count++;
}
void delete_node_at_any_position(){
    int pos,i=1;
    cout<<"Which position node you want to delete?: ";
    cin>>pos;
    if(pos<1 && pos>count){
        cout<<"Invalid position"<<endl;
        return ;
    }
    else{
        Node *nextnode;
        temp = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
}
void display(){
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    while(1){
        int n;
        cout<<"Press 1 for create and insert node at end of LL:"<<endl;
        cout<<"Press 2 for delete node at any position of the LL"<<endl;
        cout<<"Press any key for exit!";
        cin>>n;
        if(n==1){
            create_node_and_insert_end();
        }
        else if(n==2){
             delete_node_at_any_position();
        }
        else{
            break;
        }
    }
    display();
}
