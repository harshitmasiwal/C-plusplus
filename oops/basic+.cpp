#include<iostream>
using namespace std;

//making the class in heap memory 

class student {


    private :

    string name;
    int age ;
    char grade ;

    public:

    void setname(string n){
        name = n ;
    };

    void setage(int a){
        age = a ;
    }
    void setgrade(char g){
        grade = g;
    }

    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }


};


int main(){

    ///this is the dynamic allocation of the s1 student 

    student *s1 = new student; 
    
    (*s1).setname("Harshit");
    (*s1).setage(20);
    (*s1).setgrade('A');

    (*s1).getname();
    (*s1).getage();
    (*s1).getgrade();
    



    return 0;
}