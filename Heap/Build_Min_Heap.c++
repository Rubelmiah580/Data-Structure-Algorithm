/*
    Time complexity for Build a tree Min_Heap = O(n long n)
    space complexity = O(n)
*/
#include<iostream>
using namespace std;
int left(int i){
    return i*2;    // left child index;
}
int right(int i){
    return (i*2)+1; // rigtt child index;
}
int parent(int i){
    return i/2;  // parent index
}
int is_Min_heap(int h[],int heap_size){
    int p;
    for(int i = heap_size;i>1;i--){
        p = parent(i);
        if(h[p]<h[i]){
            return -1;
        }
    }
    return 0;
}

void Min_heapify(int heap[],int heap_size,int i){
    int l,r,smallest,temp;
    l = left(i);
    r = right(i);
    // check left child
    if(l<=heap_size && heap[l] < heap[i] ){
        smallest=l;
    } else{
        smallest=i;
    }

    // check right child
    if(r<=heap_size && heap[r]<heap[smallest]){
        smallest = r;
    }

     // if smallest is not root 
    if(smallest!=i){
        // swap root with smallest
        temp = heap[i];
        heap[i]=heap[smallest];
        heap[smallest]=temp;
        // recursively heapify affected subtree
        Min_heapify(heap,heap_size,smallest);
    }
}
void Build_Min_Heap(int *heap,int heap_size){
    int i;
    for(int i = heap_size/2;i>=1;i--){
        // start last non-leaf node and heapify each node
        Min_heapify(heap,heap_size,i);
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
r=is_Min_heap(heap,heap_size);
if(r==-1){
    cout<<"The tree is not Min_Heap"<<endl;
}
else{
    cout<<"This is Min_Heap"<<endl;
}

cout<<"Heap before mini_heapify: ";
print_heap(heap,heap_size);
Build_Min_Heap(heap,heap_size);

cout<<"Heap after mini_heapify: ";
print_heap(heap,heap_size);
   return 0;
}