#include<iostream>

using namespace std;

int main(){
    int n = 5;
    
    // for(int i = 0 ; i<4;i++){
    //     for(int j = 0 ; j<4 ;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // for (int i =0;i<4;i++){
    //     int k = 0;
    //     for(int j = 0 ; j<i+1 ;j++){
    //         cout<<k+1;
    //     }
    //     cout<<endl;
    // }

    //  for (int i =0;i<4;i++){
        
    //     for(int j = 1 ; j<i+1 ;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //  for (int i =0;i<4;i++){
        
    //     for(int j = 1 ; j<i+1 ;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0 ; i<5 ; i++){
    //     for(int j = 5; j>i ; j--){
    //         cout<<"8";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = 0 ; i<n ; i++){
    //     for(int j = 1 ; j<(n-i) ; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0 ;i< n ;i++){
    //     for(int j = n;j>i;j--){
    //         cout<<" ";
    //     }

    //      for(int j = 0;j<=i;j++){
    //         cout<<"*";
    //     }

    //    if(i>0){
    //      for(int j = 0;j<i;j++){
    //         cout<<"*";
    //     }
    //    }
    //     cout<<endl;
        
    // }
    
     for(int i = 0 ;i< n ;i++){
    
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        
       
        for(int j = 1;j<n-i;j++){
            cout<<"*";
        }

         for(int j = n;j>i;j--){
            cout<<"*";
        }

       
        cout<<endl;
        
    }

}