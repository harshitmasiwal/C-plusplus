#include<iostream>
using namespace std ;
int main (){

    //intitlising an array many ways ;
    // int arr[10];
    //makes 10 elements with indexing from 0 to 9 

//one way to declare 

    // cout<<"enter "; 
    // cin>>arr[5]>>arr[9];
    // cout<<arr[5]<<" "<<arr[9]<<" "<<arr[2];

//other way 


    // int arr[10] = {1,2,3,4};
    // cout<<arr[3];

//taking input from user 

    int arr[10];

    cout<<"enter 10 : ";

    for(int i = 0 ; i< 10 ;i++){
        cin>>arr[i];
    }

    //printing 

    for(int i = 0 ; i< 10 ;i++){
        cout<<arr[i]<<" ";
    }

}