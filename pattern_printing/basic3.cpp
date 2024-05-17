#include<iostream>
using namespace std;
int main(){

    //printing the alphabet square 
    //a a a a a 
    //b b b b b 
    //c c c c c 

    for(int i = 97; i<=101; i++){
        char ch = i;
        for(int j = 1 ; j<= 5 ;j++){
            cout<<ch<<"  ";
        }
    cout<<endl;

    }

    cout<<endl;

    //printing the alphabet square 
    //a b c d e 
    //a b c d e 
    //a b c d e 

    for(int i = 1 ;i<= 5; i++){

        for(int j = 97 ; j<= 101;j++){
            char ch = j;
            cout<<ch<<"  ";
        }
        cout<<endl;

    }
    
    cout<<endl;

        int count = 1; 

     for(int i = 1 ; i<=5 ; i++){

        for(int j = 1 ; j<= 5 ; j++){
            cout<<count<<"  ";
            count++;
        }

        cout<<endl;
    }



}
