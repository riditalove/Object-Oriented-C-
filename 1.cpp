#include<bits/stdc++.h>

using namespace std;

class teacher{
private:
    int salary;
public:
    string name;
    string dept;
    string course;

    void setValue(int sal)
    {
        salary = sal;
    }
    void getValue()
    {
      cout<<salary<<endl;
    }

};

class student{
private:
    double cgpa;
public:
    string name;
    string dept;

    void setValue(float res)
    {
        cgpa = res;
    }

    void getValue()
    {
        cout<<cgpa<<endl;
    }

};

int main()
{
    teacher obj1;
    obj1.name = "Ridita";
    obj1.dept = "CSE";
    obj1.course ="CSE101";
    cout<<obj1.name<<endl;
    cout<<obj1.dept<<endl;
    cout<<obj1.course<<endl;
    obj1.setValue(30000);
    obj1.getValue();

    student obj2;
    obj2.name = "Maisha";
    obj2.dept = "CSE";
    cout<<obj2.name<<endl;
    cout<<obj2.dept<<endl;
    obj2.setValue(3.90);
    obj2.getValue();




}
