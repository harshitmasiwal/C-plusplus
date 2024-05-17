#include<iostream>
using namespace std;
int main(){

    cout<<"enter a number : ";
    int n ;
    cin>>n;

    // for(int i=1;i<=10;i++){
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

    //alternative 

    for(int i = n;i<=n*10;i=i+n){
        cout<<i<<endl;
    }

}