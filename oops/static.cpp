#include<iostream>
using namespace std;

//making an static variable so all objects can acess the same

class user {

    string name;
    int ac_no;
    int balance ;
    static int total_user;
    static int total_balance;

    public:

    user (string name , int ac_no , int balance){

        this->name = name;
        this->ac_no = ac_no;
        this->balance = balance ;
        total_user++;
        total_balance += balance;

    }

    void display_user(){
        cout<<"name : "<<name<<" , "<<"ac_no. :"<<ac_no<<" , "<<"balance :"<<balance<<endl; 
    }

    //now function for changing the static value
    //we use static function 

    static void view_total_bal(){
        cout<<"total balance in bank :"<<total_balance<<endl<<"total custumer in bank : "<<total_user<<endl;
    } 

    //making withdrw and deposite function 

    void withdraw (int amount){

        if(amount >0 && amount<=balance){
            balance -= amount; 
            total_balance -= amount;
        }

    }

    void deposite (int amount){

        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }

    }


    

};

//initilising all the values to 0 

int user::total_balance = 0;
int user::total_user = 0 ;

int main(){

    user a1("ram",101,1000);
    user a2("shyam",201,1500);

    a1.display_user();
    a2.display_user();

    a1.view_total_bal();

    a1.deposite(500);
    a2.withdraw(200);

    a1.display_user();
    a2.display_user();
    
    a1.view_total_bal();



}