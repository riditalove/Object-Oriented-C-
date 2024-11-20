#include<bits/stdc++.h>

using namespace std;

class teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string course;
    teacher()
    {
        cout<<"I am a constructor"<<endl;
    }
    teacher(string name,string dept,string course,double salary)
    {
        this->name=name;
        this->dept=dept;
        this->course=course;
        this->salary=salary;
    }
    void getValue()
    {
        cout<<salary<<endl;
    }

};

int main()
{
    teacher t1,t2("ridit","CSE","CSE101",45000);
    cout<<t2.name<<endl;
    cout<<t2.dept<<endl;
    cout<<t2.course<<endl;
    t2.getValue();


}

