#include<iostream>
using namespace std;
void Bubble_sort(int arr[],int n){
    int temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){                            //Time complexity of this algorithm
                    temp  = arr[j];                                     //Worst case = O(n^2)
                    arr[j] = arr[j+1];                                  //Average case = O(n^2)
                    arr[j+1]=temp;                                      //Best case = O(n)  [if the array are sorted]
                }                                                 //Space complexity of this algorithm = O(1)
            }
        }

        cout<<"Array after sorted: ";
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
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Array before sorted: ";
    for(int i =0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    Bubble_sort(array,n);
}