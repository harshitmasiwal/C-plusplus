#include<stdio.h>
#include<bits/stdc++.h>

//duplicate elements will be there
//sorted order hoga sabme
//red-black tree / avl tree

using namespace std ; 

int main(){

    multiset<int>s; 

    s.insert(10);
    s.insert(3);
    s.insert(142);
    s.insert(110);
    s.insert(10);
    s.insert(1130);

    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    s.erase(10); //delets all the 10 or same no 

    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<*it<<" ";
    }


}