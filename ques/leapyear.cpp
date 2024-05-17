#include<iostream>
using namespace std ;

int main(){

    //conditions for a year to call it a leap year are:
    // the year if divisible by 400
    // else the year is divisible by 4 and not divisible by 100 
    // if these conditions are not fullfilled then the year is not a leap year

    int year ; 

    cout<<"enter the year : ";
    cin>>year ; 

    if(year % 400 == 0 ) cout<<"the year is leap year";
    else if(year %4 == 0 && year % 100 != 0 ) cout<<"the year is leap year ";
    else cout<<"not a leap year ";


}