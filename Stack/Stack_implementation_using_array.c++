#include<iostream>
using namespace std;
const int max_size = 10;    //constant size of array
int Stack[max_size];        //Global array
int Top=-1;
void push(){
    int num;
    cout<<"Please enter your data: ";
    cin>>num;
    if(Top==max_size-1){
        cout<<"Stack is overflow!"<<endl;
        return;
    }
    else{                                       // time complexity for operation = O(1)
        Top++;                                  // Space complexity = o(1)
        Stack[Top]=num;
    }
}
void pop(){
    if(Top==-1){
        cout<<"Stack is underflow!"<<endl;
        return ;                                    // Time complexity for pop operation = O(1)
    }                                               // Space complexity = O(1)
    else{                                                   
        Top--;
        cout<<"Popped is done!"<<endl;
    }
}

void display(){
    if(Top==-1){
        cout<<"Stack is empty!"<<endl;
        return;
    }
    for(int i = Top;i>=0;i--){
            cout<<Stack[i]<<" ";
    }
    cout<<endl;
}

int main(){
    push();
    push();
    push();
    push();
    pop();
    pop();
    push();
    display();    //call display for print the stack
}