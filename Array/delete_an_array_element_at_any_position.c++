#include<iostream>
using namespace std;
void delete_an_element_any_pos(int arr[],int size){
    int pos;
    cout<<"Which positon value you want to delete:";
        cin>>pos;
        if(pos<=0 || pos>size+1){
            cout<<"Invalid position!";
        }

    for(int i = pos-1;i<size;i++){                  //Time complexity of this dlete operation = O(n)
        arr[i]=arr[i+1];                            //Space complexity oif this delete operation = O(1)
    }
    size--;
    cout<<"array after delete an element:";
    for(int i =0;i<size;i++){
            cout<<arr[i]<<" ";
    }
}



int main(){
int array[50],size;
    cout<<"Enter your size of array:";
    cin>>size;
    if(size>50){
        cout<<"Array Overflow!";
    }
    else{
        cout<<"Enter your array element:";
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
    }
    
    delete_an_element_any_pos(array,size);

}