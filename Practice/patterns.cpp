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

    // for(int i = 1;i<=4;i++){
    //     for(int j = 4 ; j>i ; j--){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j<=i;j++){
    //         cout<<j;
    //     }
    //     for(int j = i ; j>0 ;j--){
    //             cout<<j;
    //     }
        
    //     cout<<endl;
    // }

    // for(int i = 0; i < 5;i++){
        
    //     for(int j = 0 ; j <= i ; j++){
    //         cout<<"*";
    //      }
    //     cout<<endl;
    
    // }
    // for(int i = 1;i<5;i++){
    //     for(int j = i ; j<5 ; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // int space = 2*(4-1);
    // for(int i = 0 ; i<=4 ;i++){
    //     for(int j = 1 ;j<=i ;j++){
    //         cout<<j;
    //     }

    //     for(int j = 1;j<=space;j++){
    //         cout<<" ";
    //     }

    //     for(int j = i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    //     space = space - 2;

    // }
    
    int n =5;
    int i;
    int j;

    // for(i = 0 ;i<n ;i++){
    //     for(j = i ; j<n ; j++){
    //         cout<<"*";
    //     }
    //     for(j = i ;j<(i*2);j++){
    //         cout<<"  ";
    //     }
    //     for(j = i ; j<n ; j++){
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }
    // for(i=0;i<n;i++){
    //     for(j = 0 ; j<=i ; j++){
    //         cout<<"*";
    //     }
    //      for(j=0;j<2*((n-1)-i);j++){
    //         cout<<" ";
    //     }
    //      for(j = 0 ; j<=i ; j++){
    //         cout<<"*";
    //     }

      
    //     cout<<endl;
    // }

    for(i = 0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
         for(j=0;j<2*((n-1)-i);j++){
            cout<<" ";
        }
         for(j=0;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            cout<<"*";
        }
        for(j = i ;j<(i*2);j++){
          cout<<"  ";
      }
       for(j=i;j<n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}