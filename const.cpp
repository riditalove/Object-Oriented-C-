#include<bits/stdc++.h>

using namespace std;

class teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string course;

    /* constructor overloading , which is also polymorphism*/

    teacher()
    {
        cout<<"I am a constructor"<<endl;
    }
    teacher(string n,string d,string c,double sal)
    {
        name=n;
        dept=d;
        course=c;
        salary=sal;
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
