#include<stdio.h>
#include<bits/stdc++.h>

//it is implemented using the avl tree / red-black tree structure cause it consist of the unique elements and also its is in sorted manner the sorting can be done in any desired order 

using namespace std;

class person{
    public:
    string name ;
    int age ;

    //for sorting
    bool operator < (const person &other) const{
        return age > other.age;
    }

};

int main(){

    set<person>s;

    person p1 , p2 , p3 ;

    p1.name = "sonu";
    p2.name = "monu";
    p3.name = "nonu";

    p1.age = 10;
    p2.age = 15;
    p3.age = 20;

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }

    

}