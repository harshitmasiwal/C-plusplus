#include<iostream>
using namespace std;

class human{

    private:

    string color;

    protected:

    int height;
    int age; 

};


// private >> protected >> public (the more poweer means it will overtake while inheritence of classes )

class student :public human{

    string name;
    int std ;

    public :

    student(string name,int std,int height,int age){

        this->name = name;
        this->std = std; 
        this->height = height;
        this->age = age ;


    }

    void display(){
        cout<<name<<" "<<std<<" "<<height<<" "<<age<<endl;    }
        
};

int main(){

    student s1("rahul",12,6,20);
    s1.display();


    return 0;
}