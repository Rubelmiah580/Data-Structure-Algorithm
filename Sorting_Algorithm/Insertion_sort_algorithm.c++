#include<iostream>
using namespace std;

void Insertion_sort(int arr[],int n){
    int temp,j;
    for(int i=1;i<n;i++){
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];                                       //Time complexity of this algorithm
            j--;                                                            //Worst case = O(n^2)
        }                                                                   //Average case = O(n^2)
        arr[j+1] = temp;                                                    //Best case = O(n)  [if the array are sorted]
    }                                                                //Space complexity of this algorithm = O(1)

    cout<<"Array after sorted: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter your array element: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Array before sorted: ";
       for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    Insertion_sort(array,n);

}