#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *head=NULL,*newnode,*temp; //global pointer
void create_node(){
    newnode = new Node();     //dyanamically memeory allocation
    cout<<"Enter your data: ";
    cin>>newnode->data;
    newnode->next =NULL; 
}

void add_the_Node_end_of_LL(){
    if(head==NULL){
        head =temp=newnode;                 //Time complexitiy for insert node at end = O(1)
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
}

void display(){
    int count = 0;   //for count  how many element in this LL
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<"\n The total element of this Linked list = "<<count<<endl;
}
int main(){
    char c;
    while(1){
    cout<<"Press 'Y' for create node and add this node end of the linked list :"<<endl;
    cout<<"Press any key for exit! ";
        cin>>c;
        if(c=='y'){
            create_node();
            add_the_Node_end_of_LL();
        }
        else{
            break;
        }
    }
    cout<<"The linke list are: ";
    display();
}
