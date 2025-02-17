#include<stdio.h>
#include<bits/stdc++.h>

//implemented using the oops concept like class 

using namespace std ;

int main(){

    // pair<int,int >p ;
    // p.first = 10 ;
    // p.second = 20 ;

    // cout<<p.first<<" "<<p.second<<endl ;

    //name , age , money
    pair<string,pair<int,int>>p;
    p.first = "harshit";
    p.second.first = 20 ; 
    p.second.second = 500;

    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    //second meathod

    pair<string,int>abc;
    abc = make_pair("harshit",2005);

    cout<<abc.first<< " " <<abc.second<<endl;

}