#include<iostream>
using namespace std;

class enginner{

    public:
    string branch;

    void display_branch(){
        cout<<"my engg branch is : "<<branch<<endl;
    }

};

class youtuber{

    public:
    int subs ;

    void display_subs(){
        cout<<"my subscribers are :"<<subs;
    }

};

class online_teacher :public enginner , public youtuber{

    public:
    string name ;

    online_teacher(string name,string branch , int subs){
        this->name = name;
        this->branch = branch;
        this->subs = subs;
    }

    void show_details(){
        cout<<"hello my name is : "<<name<<endl;
        display_branch();
        display_subs();
    }


};







int main(){

    online_teacher ramesh("ramesh","IT",101);
    ramesh.show_details();


    return 0;
}