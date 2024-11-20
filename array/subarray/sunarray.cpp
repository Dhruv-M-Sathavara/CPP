#include<iostream>

using namespace std;

int main(){


//subarray

    // int n = 5;
    // int arr[] = {5,3,6,4,6};

    // for(int st =0;st<n;st++){
    //     for(int end = st;end<n;end++){
    //         for(int i = st ; i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";

    //     }
    //     cout<<endl;
    // }

//fint max sum of subarray

    int n =5;
    int arr[5] = {1,2,3,4,5};
    int maxSum =INT16_MIN;

    for(int st = 0; st<n ;st++){
        int sum = 0;
        for(int end = st; end<n ;end++){
            
            
                sum = sum + arr[end];
                maxSum = max(sum,maxSum);
            
        }
       
    }

 cout<<maxSum<<endl;
}