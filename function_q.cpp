#include<iostream>

using namespace std;


int number(int n){

    int sum = 0;

    while(n > 0){
        int r = n%10;

        n = n/ 10;

        sum = sum + r; 
        
    }
    
    return sum;

}

int n(int a){

    for (int i =2 ; i<a ; i++){

        if(a%i == 0){
            return 0;
        }
        
    }

    return 1;

}

int main(){

    cout<<number(135)<<endl;

    int a = 10;

    if(n(a)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}