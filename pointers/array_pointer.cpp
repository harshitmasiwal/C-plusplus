#include<iostream>
using namespace std;
int main(){

    int arr[6] = {1,2,3,4,5,6} ;
    int *ptr = arr ;

    //printing the address of first element or 0th index

    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //printng address for second element 

    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<ptr+1<<endl;


    //printing the value at 0th index 

    cout<<arr[0]<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*arr<<endl;
    cout<<*ptr<<endl;

    //printing all the addresses 

    for (int i = 0 ; i < 5 ; i++){
        cout<<arr+i<<endl;
    }

    //printing all the values using address 

    for (int i = 0 ; i < 5 ; i++){
        cout<<*(arr+i)<<endl;
    }




    return 0;
}