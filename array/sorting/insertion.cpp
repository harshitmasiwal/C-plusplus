#include<iostream>
using namespace std;

int descending(int a[],int n){

    for(int i = 1 ; i < n ; i++){
        
        int j = i ;
        
        while(a[j]>a[j-1] && j-1!=-1){

            swap(a[j],a[j-1]);
            j--;
        }
    
    }

}

int ascending(int a[],int n){

    for(int i = 1 ; i < n ; i++){

        int j = i ;
        while(a[j]<a[j-1] && j-1 != -1){

            swap(a[j],a[j-1]);
            j--;
        }
    }
}


int main(){


    int arr[10] = {30, 90, 82, 0, 51, 8, 21, 32, 68, 87} ;
    int n = 10 ;
    
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