#include<iostream>
using namespace std;
int main(){

    //for declaring the memory in heap we use new keyword ans stores his address in the mwmory in stack

    int *num = new int;
    *num = 101;
    cout<<*num<<endl; // for value
    cout<<num<<endl; //for address 

    //we have made pointer with name (num) and it is pointing an integer space in the heap memory

    float *num2 = new float;
    *num2 = 101.99;
    cout<<*num2<<endl;

    //for declaring array 

    int *arr = new int[6];

    for(int i = 0 ; i < 6 ;i++ ){
        arr[i] = i+1;
    }

    for(int i = 0 ; i < 6 ;i++ ){
        cout<<arr[i]<<endl;
    }


    //now in last we free the memory by using delete keword

    delete num2;
    delete []arr;
     //freed the memory in heap beacuse it dont get cleared automaticlly like the stack 




    return 0;
}