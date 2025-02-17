#include<stdio.h>
#include<bits/stdc++.h>

//implemented using the concept of doubly linked list 

using namespace std;

int main(){

    list<int>abc; 

    abc.push_back(19);
    abc.push_back(1);
    abc.push_back(9);
    abc.push_back(29);
    abc.push_back(39);
    abc.push_back(13);
    abc.push_back(139);

    abc.push_front(1);

    cout<<abc.front()<<" "<<abc.back()<<endl;

    for(auto it = abc.begin() ; it != abc.end() ; it++){
        cout<<*it<<" ";
    }

}