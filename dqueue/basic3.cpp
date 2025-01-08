#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>d;
    d.push_back(10);
    d.push_back(91);
    d.push_back(9);
    d.push_front(18);
    d.pop_back();
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

}