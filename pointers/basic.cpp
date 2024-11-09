#include<iostream>
using namespace std; 
int main(){

    // int a = 100 ; 
    // int *ptr = &a;


    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<ptr<<endl;

    // //the ptr is wrriten as the datatype * variable name = & the variable 

    // //using pointer in array
    
    // char arr[3] = {'a','b','c'};

    // char *ptr2 = &arr[1];

    // cout<<arr<<endl;
    // cout<<ptr2<<endl; 



    // cout<<sizeof(ptr2);


    float a = 100.99 ; 
    float *ptr = &a;

    cout<<ptr<<endl;
    int size = sizeof(ptr);
    cout<<size<<endl;

    //for printing the value thorught pointer use *pointer-name

    int x = 10 ;
    int *ptr2 = &x;
    cout<<*ptr2<<endl; 



    return 0;
}