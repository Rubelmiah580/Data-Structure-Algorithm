#include<iostream>
using namespace std;
void insert_an_array_element(int arr[],int size){
    int num,pos;
    cout<<"Which number you want to insert: ";
    cin>>num;
    cout<<"Which position your want to insert:";
    cin>>pos;
    if(pos<=0 || pos>size+1){
        cout<<"Invalid position!";                  //Time complexity of this insert operation = O(n)
    }                                               // space complexity of this insert operation = O(1)
    else{
        for(int i = size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        size++;
    }
    cout<<"Array after insert an element:";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}




int main(){
    int array[50],size;
    cout<<"Enter your size of array: ";
    cin>>size;
    if(size>50){
        cout<<"Array overflow!";
    }
    else{
    cout<<"Enter your array element: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    insert_an_array_element(array,size);
    }
}