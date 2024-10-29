#include<iostream>
using namespace std;
/*
    Time complexity for Build a tree Max_Heap = O(n long n)
    space complexity = O(n)
*/
int left(int i){
    return i*2;   // left child index;
}
int right(int i){
return (2*i)+1;  // right child index; 
}
int parent(int i){
    return i/2;  // parent index
}

int is_max_heap(int h[],int heap_size){
    for(int i = heap_size;i>1;i--){
        int p = parent(i);
        if(h[p] < h[i]){
            return -1;
        }
    }
     return 0;
}
void max_heapify(int heap[],int heap_size,int i){
    int l = left(i);  
    int r = right(i);
    int largest,temp;
    
    // check left child
    if(l<=heap_size && heap[l] > heap[i]){
        largest = l;
    }else{
        largest = i;
    }
    // check right child
    if(r<=heap_size && heap[r] > heap[i]){
        largest = r;
    }
    
    // if largest is not root 
    if(largest != i){
        // swap root with largest 
        temp = heap [i];
        heap[i] = heap[largest];
        heap[largest]=temp;
        // recursively heapify affected subtree
        max_heapify(heap,heap_size,largest);
    }

}

void Build_Max_heap(int heap[],int heap_size){
    int i;
    for( i = heap_size/2; i>=1;i--){
        // start last non-leaf node and heapify each node
        max_heapify(heap,heap_size,i);
    }
}

void print_heap(int heap[],int size){
    for(int i =1;i<=size;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;

}

int main (){
int heap_size = 9;
int r;
int heap [] = {0,19,7,12,3,5,17,10,1,2};  // index 0 is not used 
r=is_max_heap(heap,heap_size);
if(r==-1){
    cout<<"The tree is not MAX_Heap"<<endl;
}
else{
    cout<<"This is MAX_Heap"<<endl;
}

cout<<"Heap before maxi_heapify: ";
print_heap(heap,heap_size);
Build_Max_heap(heap,heap_size);

cout<<"Heap after maxi_heapify: ";
print_heap(heap,heap_size);
   return 0;
}