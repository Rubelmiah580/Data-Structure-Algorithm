/* time complexity and space complexity of this algorihtm
    time complexiyt:
        worst case = O(n log n)
        Best case = O(n log n)
        avearage case = O(n log n)
    space complexity = O(n)
*/
#include<iostream>
using namespace std;
// a function to merge two half into  a sorted data
void merge(int *arr,int left,int right, int mid){
    int i,j,k,temp[right-left+1];
    i = left;
    j = mid+1;
    k = 0;
    // merge the two part into temp[]
    while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    // add all the remaining element after i to mid into temp[]
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    // add all the remaining element after j ot right into temp[]
    while(j<=right){
        temp[k]=arr[j];
        j++;
        k++;
    }
    // Sorted data stored temp[] to original array[]
    for(int i =left;i<=right;i++){
            arr[i]=temp[i-left];
    }

    }
void merge_sort(int *arr, int left, int right){
        if(left>=right){
            return;
        }
    int mid = (arr,left+right)/2;
    merge_sort( arr,left,mid);  //recursive call
    merge_sort(arr,mid+1,right); // recursive call
    merge(arr,left,right,mid);  

}

int main(){
    int n;
    cout<<"Enter your size of arrays: ";
    cin>>n;
    int arr[n];
    cout<<"Enter your array element: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Print Before sorted: ";
    for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    merge_sort(arr,0,n-1);
    cout<<"\nPrint After sorted: ";
    for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}
