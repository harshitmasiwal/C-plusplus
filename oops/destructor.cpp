#include<iostream>
using namespace std;

class student{

    private:

    string name ;
    int *agevalue = new int;


    public:

    student(string name , int age ){

        this->name = name;
        this->agevalue = new int;
        *agevalue = age;
    };

    void display(){
        cout<<name<<" "<<(*agevalue)<<endl;
    };

    //destructor is called at the end of program automatacally we use it for making our memory free

    //we can create it manually like this 

    ~student(){
        // cout<<"destruction is made";
        delete agevalue;
        ///the dymaic memory get relesed by this 

    };

};



int main(){

    student ram("rammmm",15);

    ram.display();


    return 0;
}