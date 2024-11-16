#include<iostream>
using namespace std;

class user{

    string name ;
    int account_no;
    int balance ;


    public:
    //this is the constucter with same name as the class 

    //default constructor

    user(){
        // cout<<"the constructor is created ";
        name = "NaN";
        account_no = 0000000;
        balance = 0;
    }

    //paramatrised constructor

    user(string name , int account_no , int balance){

        this->name = name;
        this->account_no = account_no;
        this->balance = balance ;

    }

    //constructor overloading

    user(string a , int b ){
        name = a ;
        account_no = b;
        balance = 500;
    }

    // //inline construcotr

    // inline user(string a , int ac , int bal): name(a) , account_no(ac), balance(bal) {}

    void display(){
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }

}; 


int main(){

    user a1;

    //declareing the value in constructor

    user b1("harshit",782790,1001);

    user c1("hello",95);

    a1.display();
    b1.display();
    c1.display();

    


    return 0;
}