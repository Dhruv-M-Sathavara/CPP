#include<iostream>

using namespace std;

//decimal to binary

int main(){

    int ans = 0;
    int pow = 1;
    int deci_number  = 6;

    while(deci_number>0){

        int r  = deci_number % 2;
        deci_number = deci_number/2;
        
        ans = ans + (r * pow);

        pow = pow * 10;

    }

    cout<<ans<<endl;
}
