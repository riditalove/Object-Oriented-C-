#include<bits/stdc++.h>

using namespace std;

class person
{
public:
    string name;
    int age;

    person()
    {
        cout<<"Constructor of  person Class"<<endl;

    }
    ~person()
    {
        cout<<"Destructor of person Class"<<endl;
    }


};

class student : public person
{
public:
    int roll;

    student()
    {
        cout<<"Constructor of student class"<<endl;
    }
    ~student()
    {
        cout<<"destructor of student class"<<endl;
    }
};

class lab : public student
{
public:
    string lab_name;
    lab()
    {
        cout<<"Constructor of lab class"<<endl;
    }
    ~lab()
    {
        cout<<"Destructor of lab class"<<endl;
    }
} ;

//first call of constructor will be the parent class , and then child class
//first call of destructor will be the child class , and then parent class

int main()
{
    lab s1;
    s1.name = "Hridita";
    s1.age = 25;
    s1.roll = 69;
    s1.lab_name = "EEE";

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.lab_name<<endl;

}
