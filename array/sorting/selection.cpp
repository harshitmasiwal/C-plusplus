#include<iostream>
#include<limits.h>
using namespace std;

int ascending(int a[],int n){

    int min ;
    int indx ;
    for(int i = 0 ; i < n-1 ; i++){

        min = INT_MAX;
        for(int j = i ; j < n ; j++ ){
        
            if(a[j]<min){
               min = a[j];
               indx = j ;
            }

        }
        
        swap(a[i],a[indx]);

    }

}

int descending(int a[],int n){

    int max ;
    int indx ; 

    for(int i = 0 ; i < n ; i++){

        max = INT_MIN;
        for(int j = i ; j < n ; j++){
            if(max<a[j]){
                max = a[j] ;
                indx = j ;
            }
        }

        swap(a[i],a[indx]);
    }
    
}

int main(){


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


