#include<iostream>
#include<vector>
using namespace std; 

void increment(vector<int>&num){
    for(int i = 0 ; i < 5 ; i++){
        num[i] = 10 ;
    }
}


int main(){

    //ek hi variable ko do name de sakte hai iski maddad see just we have to write

    // int x  = 100 ;
    // cout<<x<<endl;
    // int &temp = x ;
    // temp++;
    // cout<<temp<<endl;

    ///this is also used in arrays 

    vector<int>arr(5,0);
    increment(arr);
     for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}