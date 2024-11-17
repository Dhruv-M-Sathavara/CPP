#include<iostream>

using namespace std;


void swap_min_max(int arr[],int size){

    int start = 0;
    int end = size - 1;

    int max =INT16_MAX;
    int min =INT16_MIN;

    while(max>min){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main(){

    // int arr[] = {3,4,5,6,4};

    // int size = 5;

    // int sum = 0;

    // for(int i =0 ; i<size ;i++){

        

    //     sum = sum + arr[i];

    // }
    // cout<<sum;


    int arr[] = {5,6,2,4,8,5};

    int size = 6;

    swap_min_max(arr,size);
    for(int i = 0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    

}