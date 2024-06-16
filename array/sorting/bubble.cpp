#include<iostream>
using namespace std ;

int ascending(int a[],int n){

    for(int i = 0 ; i < n ;i++){

        for(int j = 0 ; j < n-1-i ; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

}

int descending(int a[],int n){

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < n-1-i ; j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}


int main (){

    int arr[10] = {30, 60, 82, 0, 51, 8, 21, 32, 68, 87} ;
    int n = 10 ; 
    //compare one with another and then accordingly swap

    int x ;
    cout<<"press 1 for ascending  / 0 for descending : ";
    cin>>x;

    if(x==0){
        descending(arr,n);
    }
    if(x==1){
        ascending(arr,n);
    }


    //output
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }


    return 0 ;
}