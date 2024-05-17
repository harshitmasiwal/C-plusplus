#include<iostream>
using namespace std;
int main(){

    int n,p;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"enter the power : ";
    cin>>p;
    int ans = 1;
    for(int i=1;i<=p;i++){

        ans = ans*n;

    }

    cout<<"ans is : "<<ans;
}