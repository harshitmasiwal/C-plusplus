#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"enter the decimal number : " ;
    cin>>n;

    int rem , ans = 0 , multiply  = 1  ; 

    while(n > 0){

        rem = n % 2 ;
        n = n/2 ;

        ans = rem * multiply + ans ;
        multiply = multiply*10;



    }
    cout<<"the binary number is : "<<ans;

    cout<<endl; 

    int b;
    cout<<"enter the binary number : ";
    cin>>b;

    ans = 0 ;
    int multiply2 = 1 ;

    while(b > 0){
        
        rem = b%10 ;
        b = b / 10 ; 
        
        ans = rem * multiply2 + ans ;
        multiply2 = 2 * multiply2 ; 

    }

    cout<<"the decimal number is : "<<ans;

}