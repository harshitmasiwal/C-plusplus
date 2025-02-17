#include<stdio.h>
#include<bits/stdc++.h>

//only unique elements 
//sorted order nahi hota isme
//serch , insert , delete at o(1)
//uses hashing techinque to achive it

using namespace std ; 

int main(){

    unordered_set<int>s; 

    s.insert(10);
    s.insert(3);
    s.insert(142);
    s.insert(110);
    s.insert(10);
    s.insert(1130);
    s.insert(1110);

    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<*it<<" ";
    }


}