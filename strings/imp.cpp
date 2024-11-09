#include<iostream>
using namespace std;
int main(){

    string name ;
    cout<<"enter your name : ";
    getline(cin,name);

    //printng length of string

    cout<<name.size();

    cout<<endl;
    //concationation of strings 

    string a = "hello";
    string b = "world";
    cout<<a+b;

    cout<<endl;

    a.push_back('i');
    b.pop_back();

    cout<<a+b;

    cout<<endl;
    //when i have to print harshit is "good" boy

    cout<<"harshit is \"good\" boy ";
    cout<<"\\";

}