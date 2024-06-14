#include<iostream>
using namespace std ;
int main(){

    //binary search

    int arr[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int s;
    cout<<"enter element to search : " ;
    cin>>s;
    
    //for seaarching we will have to search till start < end 

    int start = 0 , end = 15 , mid = 0 ;

    int flag = 0 ;


    while(start<=end){

        mid = (start + end)/2 ;

        if(arr[mid]==s){
            cout<<"the element "<<s<<" is present at the "<<mid<<" index";
            flag = 1 ;
            return 0 ;
        }
        else if (arr[mid]<s){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

    }

    if(flag == 0){
        cout<<"the element is not present in the array " ;
    }
}