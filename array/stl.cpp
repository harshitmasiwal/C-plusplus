#include<iostream>
#include<vector>
using namespace std ;

int main(){

    //declaring verctor
    vector<int>arr;
    cout<<"size of arr :"<<arr.size()<<endl;
    cout<<"capicity:"<<arr.capacity()<<endl;

//pushing element
    arr.push_back(2);
    cout<<"size of arr :"<<arr.size()<<endl;
    cout<<"capicity:"<<arr.capacity()<<endl;

    arr.push_back(4);
    cout<<"size of arr :"<<arr.size()<<endl;
    cout<<"capicity:"<<arr.capacity()<<endl;

    arr.push_back(6);
    cout<<"size of arr :"<<arr.size()<<endl;
    cout<<"capicity:"<<arr.capacity()<<endl;


    arr.push_back(1);
    cout<<"size of arr :"<<arr.size()<<endl;
    cout<<"capicity:"<<arr.capacity()<<endl;


    arr.push_back(4);
    cout<<"size of arr :"<<arr.size()<<endl;
    cout<<"capicity:"<<arr.capacity()<<endl;
    

//deleting

    arr.pop_back();
    cout<<"size of arr :"<<arr.size()<<endl;
    cout<<"capicity:"<<arr.capacity()<<endl;

    int len = arr.size();
    cout<<len;
    return 0;   
}