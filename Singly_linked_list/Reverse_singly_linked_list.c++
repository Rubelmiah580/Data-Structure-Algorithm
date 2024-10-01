#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

};
Node *head = NULL, *newnode,*temp,*prev_node;
void create_node_add_end_of_LL(){
    newnode= new Node();
    cout<<"Enter your data: "<<endl;
    cin>>newnode->data;
    newnode->next=NULL;
    if(head ==NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
}
void reverse_a_singly_LL(){                                 //time complexity for reverse a LL = O(n)
    Node *current_node=head,*next_node;
    while(current_node!=NULL){   //Traverse all the node

        next_node = current_node->next;   //store next;
        current_node->next=prev_node; //  reverse current node's next pointer

        //move pointer one position ahead;
        prev_node=current_node;
        current_node=next_node;

    }
    head = prev_node;
}
void display(){
    temp = head;
    cout<<"Linked List after reversed: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
     while(1){
        int n;
        cout<<"Press 1 for create and insert node at end of LL:"<<endl;
        cout<<"Press 2 for reverse This linked list "<<endl;
        cout<<"Press any key for exit!";
        cin>>n;
        if(n==1){
            create_node_add_end_of_LL();
        }
        else if(n==2){
             reverse_a_singly_LL();
             display();
        }
        else{
          
            break;
        }
    }
   
}