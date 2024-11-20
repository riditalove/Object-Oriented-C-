#include<bits/stdc++.h>

using namespace std;
// default visibility mode is private
// private members are never inherited, if we want to some sensitive data to be protected, then use protected access modifier

class Employee
{
protected:
    double salary;
    int id;
public:
    Employee(int i,double s)
    {
        id = i;
        salary = s;
    }
    Employee()//if we don't declare default constructor, it will throw an error
    {

    }
};

class Programmer : public Employee
{
public:
    string lan;
    Programmer(string s)
    {
        lan = s;
    }
    void show()
    {
        cout<<id<<" "<<salary<<endl;
        cout<<lan<<endl;
    }
};
int main()
{
    Programmer p("python");
    p.show();

}
