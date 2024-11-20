#include<bits/stdc++.h>

using namespace std;

class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class student
{
public:
    int roll;
    student(int roll){
        this->roll = roll;
    }
};

class TA : public person, public student
{
public:
    string course;
    TA(string name,int age,int roll, string course):person(name,age),student(roll)
    {
        this->course = course;

    }
};

int main()
{
    TA ta("ridita",25,69,"CSE101");
    cout<<ta.name<<endl;
    cout<<ta.age<<endl;
    cout<<ta.roll<<endl;
    cout<<ta.course<<endl;


}
