#include<iostream>

using namespace std;

int main(){

    // for(int i = 0; i<4;i++){
    //     for(int j = 1;j<=4;j++){
    //         cout << j;
    //     }
    //     cout<<endl;
    // }
    // char k ='A';
    // for(int i = 0 ; i<3; i++){
       
    //     for( int j = 0 ; j<3; j++){
    //         cout << k++;
            
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0 ; i<4;i++){
    //     for(int j = 0; j<i+1; j++){
    //         cout<< i;
    //     }
    //     cout<<endl;
    // }

    //  for(int i = 0 ; i<4;i++){
    //     for(int j = 1; j<=i+1; j++){
    //         cout<< j;
    //     }
    //     cout<<endl;
    // }

    // 
    // int k = 1;
    // for(int i =1 ;i<=4;i++){
    //     for(int j = 1 ; j <=i; j++){
    //         cout<<k++;
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0 ;i<4 ;i++){
    //     for(j = 1 ; j<4 ; j++){
    //         cout<<j;
    //     }
    //
    //  }

    for(int i = 1;i<=4;i++){
        for(int j = 4 ; j>i ; j--){
            cout<<" ";
        }
        for(int j = 1; j<=i;j++){
            cout<<j;
        }
        for(int j = i ; j>0 ;j--){
                cout<<j;
        }
        
        cout<<endl;
    }

}