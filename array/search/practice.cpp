#include<iostream>
using namespace std ;
int main(){

    //peak mountain index << binary search

    // int arr[10] = {2,3,4,5,6,7,10,4,3,2};
    // int len = 10 ;
    // int start = 0;
    // int end = len-1;
    // int mid =0 ;
    // while(start<=end){

    //     mid = start + ((end-start)/2);

    //     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
    //         cout<<"peak element :"<<arr[mid];
    //         break;
    //     }
    //     else if(arr[mid]>arr[mid-1]){
    //         start = mid+1;
    //     }
    //     else{
    //         end = mid-1;
    //     }
    // }

    // return 0;


    //minium element by binary search

    int arr[7]= {6 ,7, 1, 2 ,3 ,4 , 5};
    int len = 7 ;
    int start = 0 , end = len-1 , mid = 0;

    while(start <= end){
        mid = start + (end-start)/2;

        // if(mid==0){
        //     if(arr[mid+1]>arr[mid]){
        //         cout<<arr[len-1];
        //     }
        //     else {
        //         cout<<arr[0];
        //     }
        // }
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            
            cout<<arr[mid];
            // if(mid==len-1){
            //     cout<<arr[0];
            //     return 0 ;
            // }
            // else{
            //     cout<<arr[mid+1];
            //     return 0;
            // }
            return 0;
        }
        else if(arr[mid]>arr[mid-1]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
}