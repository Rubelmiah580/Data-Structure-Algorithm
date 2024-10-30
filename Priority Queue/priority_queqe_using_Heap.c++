/*
    Time complexity
    max_heapify = O(log n)
    extract max = O(long n)
    insert node = O(log n)
    incrase priority = O(log n)
    space complexity = O(n)
*/
#include<iostream>
using namespace std; 

# define MAX_SIZE 100   // define heap max size;

int left(int i){   // left child index
    return 2*i;
}
int right(int i){
    return (2*i)+1;  // right child index 
}
int parent(int i){
    return i/2;       // parent index
}

void Max_heapify(int heap[],int heap_size,int i){   //  for max_heapify property satisfy 
    int l,r,largest,temp;
    l = left(i);
    r = right(i);

    // check left child 
    if(l<=heap_size && heap[l] > heap[i]){
        largest = l;
    }else{
        largest=i;
    }

    //check right child 
    if(r<=heap_size && heap[r] > heap[largest]){
        largest = r;
    }

    // if largest is not root 
    if(largest != i){
       swap(heap[i],heap[largest]);
       Max_heapify(heap,heap_size,largest);
    }


}

int get_max(int heap[]){    // find the maximum element of heap 
    return heap[1];
}

int extract_Max(int heap[],int &heap_size){  // here &heap_size for recive referrence or memeoy address
    int max_item = heap[1];              // extract(remove ) max element 
    heap[1]=heap[heap_size];
    heap_size--;      // decrement heap_size                
    Max_heapify(heap,heap_size,1);  // if we exatrac an element we call heapify for satisfy max_heap property 
    return max_item;
}

void insert_node(int heap[],int &heap_size,int node){   // here &heap_size for recive referrence or memeoy address
    if(heap_size>=MAX_SIZE-1){
        cout<<"The priority queue is full!"<<endl;
        return;
    }
    heap_size++;  // increment heap_size
    heap[heap_size]= node;
     int  i = heap_size;

    while(i>1 && heap[parent(i)] < heap[i]){   // if child > parent 
        swap(heap[i],heap[parent(i)]);  // swap them for satisfy max_heap property 
        i = parent(i);
    }
}

void increase_priority(int heap[],int heap_size,int i,int value){  // function for increase a node priority 
    if(i<1 || i>heap_size || heap[i]>=value){
        cout<<"Invalid input"<<endl;
        return;
    }
    heap[i]=value;
       while (i > 1 && heap[parent(i)] < heap[i]) {  // if child > parent
        swap(heap[i], heap[parent(i)]);  // swap them for satisfy Max_heap property 
        i = parent(i);
    }
}


// Function to print the contents of the priority queue
void print(int heap[], int heap_size) {
    for (int i = 1; i <= heap_size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main(){
int heap[MAX_SIZE];
int heap_size = 0;



insert_node(heap,heap_size,10);
insert_node(heap,heap_size,20);
insert_node(heap,heap_size,15);
insert_node(heap,heap_size,30);
insert_node(heap,heap_size,40);
insert_node(heap,heap_size,50);

cout<<"Priority queue after insert node: ";
print(heap,heap_size);

cout<<"The maximum node of this priority quequ = "<<get_max(heap)<<endl;
extract_Max(heap,heap_size);
cout<<"Priority queqe after extract maximum elemetn :";
print(heap,heap_size);

increase_priority(heap,heap_size,3,60);
cout << "Priority Queue after increasing priority of index 3 to 60: ";
    print(heap, heap_size);

    return 0;
}

