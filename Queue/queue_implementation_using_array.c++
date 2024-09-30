#include<iostream>
using namespace std;
const int max_size = 10;   //constant size of array
int queue[max_size];       // global array
int front = -1,rear = -1;

void enqueue (){
    int num;
    cout<<"Please enter your data:";
    cin>>num;
    if(rear==max_size-1){
        cout<<"queue is overflow!"<<endl;                       // Time complexity for dequeue operation = O(1)
        return;                                                 //space complexity = O(1)
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=num;
    }
    else{
        rear++;
        queue[rear]=num;
    }
}

void dequeue (){
    if(front==-1 && rear==-1){
        cout<<"queue is underflow!"<<endl;
    }
    else if ( front==rear){
        front=-1;                                   // Time complexity for dequeue operation = O(1)
        rear=-1;                                     //space complexity = O(1)
        cout<<"dequeue is sucessfull"<<endl;
    }
    else{
        front++;
        cout<<"dequeue is sucessfull"<<endl;
    }
}

void display(){
    for(int i = front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

int main(){
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    enqueue();
    display();      // call dispaly for print the queue 
}