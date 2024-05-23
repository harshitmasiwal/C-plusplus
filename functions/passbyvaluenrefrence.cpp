#include<iostream>
using namespace std ;

int function1 (int n ){

    n++;

}

int function2(int &n ){

    n++;
}


int main (){

    int a = 15 ; 


    function1(a);
    
    cout<< a ;

    cout<<endl;

    //this will return the value of 15 without increment 
    //its called pass by value 
    //only value is passed in it 

    function2(a);

    cout<<a;
}
