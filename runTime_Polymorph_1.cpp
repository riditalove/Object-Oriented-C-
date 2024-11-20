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

    void show()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

class student : public person
{
public:
    int roll;

    student(string name, int age, int roll):person(name,age)
    {
        this->roll = roll;
    }

    void show()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;

    }


};

int main()
{
    student s1("ridita",25,69);
    person p1("ridita",25);
    p1.show();
    s1.show();

}

