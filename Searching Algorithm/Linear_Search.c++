#include<iostream>
using namespace std;
int Linear_search(int array[],int n,int value){
    for(int j = 0;j<n;j++){
        if(array[j]==value){
            return j;                                       // Time complexity of this algorithm = O(n)
        }                                                   // Space complexity of this algorithm =O(1)
    }
    int j = -1;
    return j;
}
int main(){
int size,number;
cout<<"Please Enter your size of array: ";
cin>>size;
int arr[size];
cout<<"Enter your arrays: ";
for(int i = 0;i<size;i++){
        cin>>arr[i];
}
cout<<"Which  value are your searching?: ";
cin>>number;
int result  = Linear_search(arr,size,number);
 if(result==-1){
    cout<<"The number isn't  found"<<endl;
 }
 else{
    cout<<"The "<<number<<"is found at index = " <<result;
 }
}