#include<iostream>
using namespace std;
int main(){

    int arr[10] = {30, 30, 21, 0, 51, 8, 21, 32, 68, 87} ;
    int flag = 0 ;

    int n ;
    cout<<"enter no. to search : ";
    cin>>n ;

    //linear search code 

    for(int i = 0 ; i < 10 ; i++){
        if(arr[i]==n){
            flag = 1 ;
            cout<<"index : "<<i<<"\n";
        }
    }

    if(flag==0){
        cout<<"the no. "<<n<<" is not present in array "; 
    }

    return 0;

}