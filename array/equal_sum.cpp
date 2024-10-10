#include<iostream>
#include<vector>
using namespace std ; 
int main () {
    
    vector<int>arr(10);

    arr = {1,2,4,6,2,1,5,8,2,1} ;
    int total_sum = 0 ; 

    for(int i = 0 ; i<arr.size() ; i++){
        total_sum = arr[i] + total_sum; 
    }
    int prefix = 0 ;
    for(int i = 0 ; i < arr.size() ; i++){
        prefix = prefix + arr[i] ;

        if(total_sum == 2*prefix){
            cout<<"yes";
            return 0;
        }
    }
    
    cout<<"no";

    return 0 ;
}