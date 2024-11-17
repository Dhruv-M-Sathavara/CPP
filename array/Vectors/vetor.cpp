#include<iostream>
#include<vector>

using namespace std;

int main(){
    //veector<int> vec; for zise 0 empty vector
    // vector<int> vec = {1,2,3}; //for any value

    // vector<int>vec(3,1);//for fixed value
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;

    //functions


    vector<int> vec;

    vec.push_back(7);
    vec.push_back(17);
    vec.push_back(27);
    //vec.pop_back()
   
    cout<<"front = "<<vec.front()<<endl;
    cout<<"back = "<<vec.back()<<endl;
    cout<<"potision = "<<vec.at(0)<<endl;
    cout<<"size = "<< vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl;

    //using loop

    for(int i : vec){

        cout<<i<<endl;
    }


    return 0;

}