#include<iostream>
using namespace std;

//defining function
int sum(int x, int y){

    cout<<x+y;
    return 0;
}

int main (){

    int a,b;
    cout<<"enter two number :";
    cin>>a>>b;

    

    sum(a,b);
}