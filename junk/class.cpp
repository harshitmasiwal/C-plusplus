#include<iostream>
using namespace std ;
int main(){

    for(int i = 0 ; i < 4 ;i++){
        for(int j = 0 ; j <=i  ;j++){
            cout<<i+1;
        }
        cout<<endl;
    }

    cout<<endl;

    char ch='A';
    for(int i = 0 ; i < 4 ;i++){
        for(int j = 0 ; j <=i  ;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }

    cout<<endl;

    
   for(int i = 0 ; i < 5 ;i++){
    for(int j = 5-i ; j <= i ;j++){
        cout<<j;
    }
    cout<<endl;
   }
    
    return 0;
}