#include<iostream>

using namespace std;



int linearsearching(int arr[],int size,int key){
    for (int i = 0 ; i<size ; i++){

         if(arr[i] == key){

           return i;

         }
    }
    
}

int main(){


    //without function
    // int arr[] = {12 , 9 , 19 , 1};
    // int size = 4;

    // int key = 9;

    // int index = -1;
    // for (int i = 0 ; i<size ; i++){

    //     if(arr[i] == key){

    //         index = i;
    //         break;
    //     }

        
    // }
    // cout << index;
    
    int arr[] = {4,2,6};
    int size = 2;

    int key = 2;

    cout<<linearsearching(arr,size,key)<<endl;
    return 0;

}