#include<iostream>
#include<string>
using namespace std;

//simple onee 

// class student{

//     public:

//     string name;
//     int age ;
//     char grade ;

// };


// int main (){

//     student s1;
//     s1.name = "harshit";
//     s1.age = 20 ;
//     s1.grade = 'A' ;

//     cout<<s1.name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.grade<<endl;



//     return 0;
// }


class student{

    string name;
    int age ;
    char grade ;


    public:

    void setname(string n){
        name = n ;
    };

    void setage(int x){
        age = x ;
    }

    void setgrade(char g){
        grade = g;
    }

    void getname(){
        cout<<name<<endl; 
    }; 
    void getage(){
        cout<<age<<endl;
    };
    void getgrade(){
        cout<<grade<<endl;
    };


};

int main(){

    student s1;
    s1.setname("harshit");
    // cout<<s1.name;    this will not work beacause it is private

    //so we will use function 

    s1.setage(20);
    s1.setgrade('B');

    s1.getname();
    s1.getage();
    s1.getgrade();


    return 0;

}