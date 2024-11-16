#include<iostream>

using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size - 1;

    while(start<end){

        swap(arr[start],arr[end]);
        start++;
        end--;

    }


}

int main(){

    // int arr[5] = {2,5,6,7,8};
    

    // for(int i = 4;i>=0 ;i--){

    //     cout<<arr[i]<<endl;

    // }

    //using 2 pointer method swaping

    int arr[]={5,4,6,5,6,4};
    int size = 6;


    reverse(arr,size);

    for(int i = 0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    

    
} 
