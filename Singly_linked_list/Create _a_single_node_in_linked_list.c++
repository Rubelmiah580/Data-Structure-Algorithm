#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int data;
node *next;

};
node *head = NULL;

int main()
{
node *newnode;
newnode=new node();
newnode->data = 10;
newnode->next = NULL;
cout<<"The Value of first and only node = "<<newnode->data<<endl;


    return 0;
}