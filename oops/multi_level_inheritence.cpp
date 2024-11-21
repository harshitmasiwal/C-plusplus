#include <iostream>
using namespace std;

class person
{

protected:
    string name;

public:
    void display_name()
    {
        cout << "name is :" << name << endl;
    };
};

class employe : public person
{

protected:
    int salary;

public:
    void display_salary()
    {
        cout << "salary is :" << salary << endl;
    };
};

class manager : public employe
{
public:


    string department;

    manager(string name, int salary, string department)
    {

        this->name = name;
        this->salary = salary;
        this->department = department;
    };


    void display_department()
    {
        cout << "department is :" << department << endl;
    }
};

int main()
{
    manager m1("rahul",20000,"dev");
    m1.display_name();
    m1.display_salary();
    m1.display_department();
    m1.department = "content"; //accessable
    // m1.salary = 10000; unacessable beacuse it is from diffrent class and protected
    


    return 0;
};