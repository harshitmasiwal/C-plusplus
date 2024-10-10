#include<iostream>
using namespace std ;
int main () {

    int arr[10] = {0,1,1,0,1,0,1,0,1,1}; 

    int len = 10 ;

    int start = 0 ;
    int end = len-1;

    while (start<end){
        if(arr[start]==0){
            start++;
        }
        else if(arr[end]==1){
            end--;
        }
        else {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

    for(int i = 0 ; i < len ; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}