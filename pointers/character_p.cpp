#include<iostream>
using namespace std ;
int main(){


    // char name = 'a';
    // char *ptr = &name;
    // cout<<name<<endl;
    // cout<<ptr<<endl;

    //above will not print address of the character so we use typeconversion from char to void

    char name = 'a';
    char *ptr = &name;
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr<<endl;

    //this also applies for character array for getting address

    char arr[5] = "1234";
    cout<<arr<<endl; //this will print the whole array
    cout<<(void*)arr<<endl; //the first element address

    float arr2[5] = {12,13,12,43,12};
    float *ptr2 = arr2;
    cout<<arr2<<endl; //this will print the whole array
    cout<<ptr2<<endl; //the first element address

    //so when we want to print the address of character we use (void*) to typecast the pointer 



    

    return 0;
}