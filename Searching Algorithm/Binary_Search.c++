#include<iostream>
using namespace std;
int Binary_Search(int array[],int n,int value){
        int mid,left = 0,right = n-1;
        mid = (left + right)/2;
        while(left<=right){
            mid = (left+right)/2;
            if(array[mid]==value){
                return mid;
            }                                                  // Time complexity of this algorithm = O(long n)
            if(array[mid]<value){                              // Space complexity of this algorithm = O(1)
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return -1;
}

int main(){
    int size,number;
    cout<<"Enter your size of arrays: ";
    cin>>size;
    int arr[size];

    cout<<"Enter your element of arrays: ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Which number are you Searching?:";
    cin>>number;
    int result = Binary_Search(arr,size,number);
    if(result == -1){
        cout<<"Number isn't found"<<endl;
    }
    else{
        cout<<"The number is found at index = "<<result<<endl;
    }
    }