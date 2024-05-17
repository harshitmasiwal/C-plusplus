#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"enter a no. : ";
    cin>>n;

    int last = 0 , prev = 1 , ans = 0;

    for(int i =1;i<=n;i++){

        ans = last + prev ;
        last = prev;
        prev = ans;

    }

    

    cout<<"fiboo of nth number is "<<ans;


}