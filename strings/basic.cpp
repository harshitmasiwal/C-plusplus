#include<iostream>
using namespace std; 
int main(){

    //initilization of string

    char text[6] = {'h','e','l','l','o',' '};
    cout<<text;

    //or

    for(int i = 0 ; i < 5 ; i ++){
        cout<<text[i];
    }

    cout<<"\n";

    //userinput


    char name[10];
    cin>>name;

    name[4] = '\0';
    cout<<name;

    cout<<'\n';

    string para ;
    cin>>para;
    cout<<para;

    // to take input string with sapce 

    string form;
    getline(cin,form);
    cout<<form;


    return 0;

}