#include<iostream>
#include<vector>
using namespace std ; 
int main(){

    vector<int>arr  = {1,2,3,4,5,6,7,8,9}; 
    vector<int>ans ;
    int size  = arr.size() ; 
    int sum = 0 ;
    for(int i = 0 ; i<size ; i++){
        sum = sum+arr[i] ;
        ans.push_back(sum);
    }
    
    for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}