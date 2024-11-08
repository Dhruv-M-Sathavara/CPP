#include<iostream>

using namespace std;


//Q1 

// int main(){
// int n  = 5;
//     for(int i=1 ; i<=5 ; i++){
//         for(int j=1 ; j<n ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//Q2

    // int main(){
    // int n  = 5;
    // for(int i=1 ; i<n ; i++){
    //     for(int j=1 ; j<n ; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

//Q3

    // int main(){
    // int n  = 5;
    // for(int i=1 ; i<n ; i++){
    //     char ch = 'A';
    //     for(int j=1 ; j<n ; j++){
    //         cout<<ch++<<" ";
    //     }
    //     cout<<endl;
    // }

//Q4

    // int main(){
    // int n  = 4;
    // int num = 1;
    // for(int i=1 ; i<n ; i++){
        
    //     for(int j=1 ; j<n ; j++){
    //         cout<<num++<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout << "After pattern : " << num << endl;

    // int main(){
    // int n  = 4;
    // char ch = 'A';
    // for(int i=1 ; i<n ; i++){
        
    //     for(int j=1 ; j<n ; j++){
    //         cout<<ch++<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout << "After pattern : " << ch << endl;

//Q5

    // int main(){

    //     int n = 6;
        
    //     for(int i = 0 ; i<n ;i++){
    //         for(int j = 0; j<i+1 ; j++){
    //             cout<<(i+1);
    //         }
    //         cout<<endl;
    //     }  
    // int main(){

    //     int n = 6;
        
    //     for(int i = 0 ; i<n ;i++){
    //         for(int j = 0; j<i+1 ; j++){
    //             cout<<(i+1);
    //         }
    //         cout<<endl;
    //     }  

        // int main(){

        // int n = 6;
        
        // for(int i = 0 ; i<n ;i++){
            
        //     for(int j = 1; j<i+1 ; j++){
        //         cout<<(j);
        //     }
        //     cout<<endl;
        // }  

        //Q6

        // int main(){

        // int n = 6;
        
        // for(int i = 0 ; i<n ;i++){
                
        //     for(int j = (i+1); j>0 ; j--){
        //         cout<<(j);
        //     }
        //     cout<<endl;
        // } 

        //Q7

        // int main(){

        // int n = 5;
        // int count = 1;
        
        // for(int i = 0 ; i<n ;i++){
            
        //     for(int j = 1; j<i+1 ; j++){
        //         cout<<(count++)<<" ";
        //     }
        //     cout<<endl;
        // }  

    //Q7

    // int main(){

    //     int n = 5;
    //     char ch = 'A';
        
    //     for(int i = 0 ; i<n ;i++){
            
    //         for(int j = 1; j<i+1 ; j++){
    //             cout<<(ch++)<<" ";
    //         }
    //         cout<<endl;
    //     }  

//Q8

    // int main(){

    //     int n = 5;
    //     int count = 1;
        
    //     for(int i = 0 ; i<n ;i++){

    //         for (int j = 0; j < i; j++)
    //         {
    //             cout<<" ";
    //         }
            
            
    //         for(int j = 0; j<n-i ; j++){
    //             cout<<(i+1);
    //         }
    //         cout<<endl;
    //     }  

//  Q9
    // int main(){

    //     int n = 5;
    //     int count = 1;
        
    //     for(int i = 0 ; i<n ;i++){

    //         for (int j = 0; j < n - i; j++)
    //         {
    //             cout<<" ";
    //         }
            
            
    //         for(int j = 1; j< i+1 ; j++){
    //             cout<<(j);
    //         }

    //         for(int j = i+1; j>0; j-- )
    //         {
    //             cout<<(j);
    //         }
            
    //         cout<<endl;
    //     }  

//Q10

  int main(){

        int n = 5;
        int count = 1;
        
        for(int i = 0 ; i<n ;i++){

            for (int j = 0; j < n - i - 1; j++)
            {
                cout<<" ";
            }
            cout << "*";
            
            if(i != 0){
                for(int j=0 ; j <2*i -1 ; j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;
            
            }
//bottom
            for(int i =0; i<n-1 ;i++){

                for(int j = 0 ;j<i+1;j++){
                    cout<<" ";
                }

                cout<<"*";

                if(i != n-2){

                     for(int j = 0 ;j<2*(n-i)-5;j++){
                    cout<<" ";

                }
                cout<<"*";
            }

          cout<<endl;
        } 
    }
  


    
