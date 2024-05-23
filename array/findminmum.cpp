#include<iostream>
#include<limits.h>

using namespace std ;
int main () {

    int arr[5] = {43,45,22,56,24};

    int ans = INT_MAX ;
    for(int i = 0 ; i < 5 ; i ++){

        if(arr[i]<ans) {
            ans = arr[i];
        }


    }
    cout<<ans ;
 }