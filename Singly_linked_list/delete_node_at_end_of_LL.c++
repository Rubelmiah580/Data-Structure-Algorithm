#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *head = NULL,*newnode,*temp;
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
}
void delete_node_at_end_LL(){
    Node *previous_node;
    temp = head;
    while(temp->next!=NULL){
        previous_node = temp;               //Time comlexity for delete node at end of LL = O(n)
        temp = temp->next;
    }
    if(head == temp){
        head = NULL;
    }
    else{
    previous_node->next = NULL;
    temp = temp->next;
    }
    free(temp);
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
        cout<<"Press 2 for delete node at end of the LL"<<endl;
        cout<<"Press any key for exit!";
        cin>>n;
        if(n==1){
            create_node_and_insert_end();
        }
        else if(n==2){
            delete_node_at_end_LL();
        }
        else{
            break;
        }
    }
    display();
}