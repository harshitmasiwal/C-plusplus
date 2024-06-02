#include<iostream>
using namespace std ;

int fun(int addres[],int n ){

    for(int i = 0 ; i < n ;i++){
        cout<<addres[i]<<" ";
    }

}
int main (){

    int arr[7] = {1,2,3,4,5,6,7};

    fun(arr,7);
}