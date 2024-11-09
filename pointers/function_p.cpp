#include<iostream>
using namespace std;

void increse(int *n){
    *n = *n + 1;
}

// int main(){ 


//     int x = 11; 
//     increse(&x);
//     cout<<x;

//     return 0;
// }

// void dubl(int *ptr){
    
//     for(int i = 0 ; i <5 ; i++){
//         ptr[i] = 2*ptr[i];
//     }
// }

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     dubl(arr);
//     for(int i = 0 ; i < 5 ; i++){
//         cout<<arr[i]<<endl;
//     }

// }

void swapping(int *ptr1 , int *ptr2){
    // *ptr1 = *ptr1 + *ptr2;
    // *ptr2 = *ptr1 - *ptr2;
    // *ptr1 = *ptr1 - *ptr2;
    //the above also works without temp variable

    //simple with temp variable
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main(){

    int a = 100 , b = 200 ;
    swapping(&a,&b);
    cout<<a<<endl<<b;


}