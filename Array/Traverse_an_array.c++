#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter your array element:";
    for(int i=0;i<n;i++){                       //Time complexity of this Program = O(n)
        cin>>array[i];                           //Space complexity of this program =O(n)
    }
    cout<<"The array elemetn are: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}