#include<iostream>
using namespace std;
void Selection_sort(int arr[],int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                min = j;                                            //Time complexity of this algorithm
            }                               
        }                                                                     //Worst case = O(n^2)
        if(min!=i){                                                            //Avarage case = O(n^2)
            temp = arr[i];                                                     //Best case = O(n^2)
            arr[i]=arr[min];                                        //Space complexity of this algorithm = O(1)
            arr[min]=temp;
        }
    }
    
    cout<<"Array after sorted:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter your size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter your array element: ";
    for(int i =0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Array before sorted: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    Selection_sort(array,n);

}