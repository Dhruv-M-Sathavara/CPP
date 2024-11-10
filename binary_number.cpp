#include<iostream>

using namespace std;

//decimal to binary

 //binary to decimal

    int binartodeci(int num,int r){

        int ans = 0 ;
        int pow = 1;

        while(num>0){

            int r = num % 10;

            ans+= (r * pow);

            num = num / 10;

            pow = pow *2;

        }

        return ans;

    }

int main(){

    // int ans = 0;
    // int pow = 1;
    // int deci_number  = 6;

//Decimal to binary

    // while(deci_number>0){

    //     int r  = deci_number % 2;
    //     deci_number = deci_number/2;
        
    //     ans = ans + (r * pow);

    //     pow = pow * 10;

    // }
  

    // cout<<ans<<endl;

    cout<<binartodeci(1010,2);
}
