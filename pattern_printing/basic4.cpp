#include<iostream>
using namespace std;
int main (){

    int n = 0 ; 
    cout<<"enter a number : ";
    cin>>n;
//printing a right angled triangle

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
//using numbers 
    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

//next 3

    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

//next 4

    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

//next 5

    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=65;j<65+i;j++){
            char ch = j ;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

//next 6

    cout<<endl;

    for(int row = 1; row <=n;row++){
        for(int col = n; col>=row;col--){
            cout<<"* "<<" ";
        }
        cout<<endl;
    }

//next 7 

    cout<<endl;

    for(int row = 1; row <= n;row ++){
        for(int col = 1;col <=n+1 - row ;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

//next 8

    cout<<endl;

    for(int row = 1 ;row <= n;row ++){
        for(int col =  n;col>=n+1 - row;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

}