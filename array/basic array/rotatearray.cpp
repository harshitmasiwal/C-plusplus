#include<iostream>
using namespace std ;
int main(){

    int arr[6] = {2,3,4,5,6,1} ;

    for(int i = 0 ; i < 5 ; i++){

        //swaping with last element 
        int temp = arr[i] ;
        arr[i] = arr[5];
        arr[5] = temp ;

    }

    for(int i = 0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }

}