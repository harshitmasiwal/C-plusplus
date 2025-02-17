#include<stdio.h>
#include<bits/stdc++.h>

//it is implemented using the avl tree / red-black tree structure cause it consist of the unique elements and also its is in sorted manner the sorting can be done in any desired order 

using namespace std;

int main(){

    set<int>s;

    s.insert(10);
    s.insert(9);
    s.insert(12);
    s.insert(11);
    s.insert(14);
    s.insert(3);
    s.insert(2);

    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    //changing the oreder of 

    set<int,greater<int>>s2;

    s2.insert(10);
    s2.insert(9);
    s2.insert(12);
    s2.insert(11);
    s2.insert(14);
    s2.insert(14);
    s2.insert(3);
    s2.insert(2);

    for(auto it = s2.begin() ; it != s2.end() ; it++){
        cout<<*it<<" ";
    }

    cout<<endl;


    //using the find meathod 

    if(s.find(3) != s.end()){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }

    cout<<endl;

    if(s2.find(20) != s2.end()){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }

    cout<<endl;

    //alternative method for finding element 

    cout<<s.count(14); //retruns 1
    cout<<endl;
    cout<<s2.count(100); //retruns 0

    cout<<endl;

    //for deleting the element 

    s.erase(14);
    cout<<s.count(14); //retruns 0

}