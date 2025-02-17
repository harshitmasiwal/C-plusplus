#include<stdio.h>
#include<bits/stdc++.h>

//uinque keys are present 
//stores in key value pair
//search , insert , delete => constant time
//there is no order of keys 
//uses hasing technique 
//implmented using red-black tree / avl tree


using namespace std;

int main(){ 

    unordered_map<int,int>m ;

    m.insert(make_pair(20,30));
    m.insert(make_pair(10,31));
    m.insert(make_pair(30,32));
    m.insert(make_pair(40,34));
    m.insert(make_pair(20,35)); //this will gets ignored if key already exists 
    m[100] = 40; //another way for insertion 
    m[100] = 50; //and this for updation 


    for(auto it = m.begin() ; it != m.end() ; it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    

}