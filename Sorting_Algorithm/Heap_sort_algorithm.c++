/*
    Time complexity for Build a tree Max_Heap = O(n long n)
    Heap sort = O(n log n)
    space complexity = O(n)
*/
#include<iostream>
using namespace std;
int left(int i){
    return 2*i;  // left child index
}

int right(int i){
    return (2*i)+1; //right child index
}

int parent(int i){
    return i/2;  // parent index;
}

// check the given tree is max_heap or Not
int is_Max_heap(int h[],int heap_size){
    int p;
    for(int i = heap_size;i>1;i++){
        p = parent(i);
        if(h[p] < h[i]){
            return -1;
        }
    }
    return 0;
}

void Max_heapify(int heap[],int heap_size,int i){
    int l,r,largest,temp;
    l = left(i);
    r = right(i);
    
    // check  left child 
    if (l<=heap_size && heap[l] > heap[i]){
        largest = l;
    } else{
        largest=i;
    }

    // check right child
    if(r<=heap_size && heap[r] > heap[largest]){
        largest = r;
    }

    // if largest is not root
    if(largest!=i){
        temp = heap[i];
        heap[i]=heap[largest];
        heap[largest]=temp;

        // call reucursivly with affectd node
        Max_heapify(heap,heap_size,largest);
    }
}

void Build_Max_Heap(int heap[],int heap_size){
    int i ;
    for(i = heap_size/2; i >=1; i--){
        // start non-leaf node and heapify all root node
        Max_heapify(heap,heap_size,i);
    }
}

// function for sortint the heap 
void Heap_sort_algo(int heap[],int heap_size){
    // swap the root with last element of current heap;
    int temp,i;
    for( i = heap_size; i>1; i--){
    temp = heap[1];
    heap[1]=heap[i];
    heap[i]=temp;
    heap_size -=1; //size reduce by 1 in each operation 
    Max_heapify(heap,heap_size, 1);  // alaway start heapifying on index 1;

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
r=is_Max_heap(heap,heap_size);
if(r==-1){
    cout<<"The tree is not MAX_Heap"<<endl;
}
else{
    cout<<"This is MAX_Heap"<<endl;

}

cout<<"Heap before maxi_heapify: ";
print_heap(heap,heap_size);

Build_Max_Heap(heap,heap_size);
cout<<"Heap after maxi_heapify: ";
print_heap(heap,heap_size);

Heap_sort_algo(heap,heap_size);
cout<<"Heap after applying Heap_sort_algorithm : "<<endl;
    print_heap(heap,heap_size);
   return 0;
}