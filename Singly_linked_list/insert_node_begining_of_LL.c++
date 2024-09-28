#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *head=NULL,*newnode,*temp; //global pointer 
void create_node_and_add_end_LL(){
    newnode = new Node();
    cout<<"Enter your data:";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head == NULL){
        head=temp=newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }

}

void insert_node_at_begining(){
    newnode=new Node();         //dynamically allocate memory
    cout<<"Enter your data: ";
    cin>>newnode->data;
        newnode->next = head;               //time complexitiy for inset node at begining = O(1)
        head = newnode;

    }
void display(){
    int count=0;      //for count the total element of LL
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    cout<<"\n The total element of this linked list = "<<count<<endl;
}

    int main(){
    char c;
    while(1){
    cout<<"Press 'Y' for create node and add this node end of the linked list :"<<endl;
    cout<<"Press 'i' for insert data at beganing of the linked list: "<<endl;
    cout<<"Press any key for exit:";
        cin>>c;
        if(c=='y'){
           create_node_and_add_end_LL();
        }
        else if(c=='i'){
            insert_node_at_begining();
        }
        else{
            break;
        }
    }
    cout<<"The linke list are: ";
    display();
}