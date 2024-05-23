#include<iostream>
using namespace std ;

int swap(int a, int b){

    int temp = a ;
    a = b ;           //this fun will not swap because of pass by values 
    b = temp ; 

}

int swap2(int &a , int &b ){

    int temp = a ; 
    a = b ;
    b = temp ;
}

int main(){

    int a, b ;

    cout<<"enter two values : " ;
    cin >> a >> b ;
    swap(a,b);
    cout<<a<<b ;

    cout<<endl ;

    swap2(a,b);

    cout<<a<<" "<<b;
}