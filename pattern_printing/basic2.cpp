#include<iostream>
using namespace std;

int main(){

    //printing like this
    //1 2 3 4 5 
    //1 2 3 4 5
    //1 2 3 4 5
    //1 2 3 4 5
    //1 2 3 4 5


    for(int i = 1 ; i<=5 ; i++){

        for(int j = 1 ; j<= 5 ; j++){
            cout<<j<<"  ";
        }

        cout<<endl;
    }

    cout<<endl;

    // decending pattern


     for(int i = 1 ; i<=5 ; i++){

        for(int j = 5 ; j>=1 ; j--){
            cout<<j<<"  ";
        }

        cout<<endl;
    }
    
    cout<<endl;

    //printing squares of each row terms

     for(int i = 1 ; i<=5 ; i++){

        for(int j = 1 ; j<= 5 ; j++){
            cout<<j*j<<"  ";
        }

        cout<<endl;
    }

    cout<<endl;

    //printing the cubes of each row term

     for(int i = 1 ; i<=5 ; i++){

        for(int j = 1 ; j<= 5 ; j++){
            cout<<j*j*j<<"  ";
        }

        cout<<endl;
    }


}