///isme initilaise bhar kar te hai
#include<iostream>
using namespace std;
int main(){
int n = 1;

while (n <=10 ){
    cout<<"hello world"<<endl;
    n++;
}

//factors finder 
int a = 0;
cout<<"enter a number :";
cin>>a;
int i = 1 ;
while(i <= a){

    if(a%i==0)cout<<i<<" ";
    i++;
}
}