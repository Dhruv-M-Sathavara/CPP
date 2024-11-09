#include <iostream>

using namespace std;

// int hello(){
//     cout<<"hi\n";
//     return 3;
// }

// int main(){
//     cout << hello();
    
// }

//sum of two number

// int a(){
//     return 3;
// }

// int b(){
//     return 2;
// }

// int main (){
//     cout << a() + b();
// }

//sum
int sum (int a , int b){ //parameter
    int s = a+b;
    return s;
}

//min
int min (int k, int d){
    if(k>d){
        return d;;
    }
    else{
        return k;
    }
}

//sum of nummber 1 to n

int suum(int n,int sum){

    for(int i=1;i<=n;i++){
        sum = sum + i;
        
    }

    return sum;
}

//factorial

int fact(int m){
    int fact = 1;
    for(int i=1;i<=m;i++){
        fact *= i;

    }
    return fact;
}

int main(){
    
    // cout<<sum (10,5)<<endl; //argument
    // cout<<min(15,25)<<endl;
    // cout<<suum(6,0)<<endl;
    // cout<<fact(3)<<endl;
    // cout<<fact(5)<<endl;

    int p = 10;
    int q = 9;

    cout<<sum (p,q)<<endl; 
    // cout<<min(15,25)<<endl; // this is called pass by value
    // cout<<suum(6,0)<<endl;
    // cout<<fact(3)<<endl;
    // cout<<fact(5)<<endl;
}