#include<iostream>

using namespace std;

int main(){

    // int a;

    // for(a=0 ; a<=5 ; a++){
    //     cout<<a;
    // }

    // int a = 1;

    // while(a <= 5){
    //     cout << a << " ";
    //     a++;
    // }

    // cout << endl;


// Q1 sum of n number

    // int a;
    // int sum = 0;

    // for(a=1 ; a<=5 ; a++){
    //     sum = sum + a;
        
    // } 
    // cout<<"Sum : "<<sum;

//Q2 sum of all odd number

    // int a;
    // int sum = 0;

    // for(a=1 ; a<=5 ; a++){
    //     if(a%2!=0){
    //         sum = sum +a;
    //     }

        
    // } 
    // cout<<"Sum : "<<sum;

//Q3 ckeck number is prime or not

    // int a;
    // int n = 10;
    // bool isPrime = true;

    // for(a=2 ; a<=(n-1) ; a++){  //another i*i <= n use at limit
    //     if(n%a==0){
    //         isPrime = false;
    //         break;
    //     }

        
    // } 

    // if(isPrime == true){
    //     cout << "Prime Numebr\n";
    // }
    // else{
    //     cout << "non prime number";
    // }

//  Q4 sum of all mumber 1 to n which divided by 3.

int a;
int sum = 0;

for(a=1;a<=10;a++){
    if(a%3==0){
        sum = sum +a;

    }

    
}

cout<<sum;

return 0;
}