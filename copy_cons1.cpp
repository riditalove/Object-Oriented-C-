#include<bits/stdc++.h>

using namespace std;

class teacher
{
public:
    string name;
    string dept;
    teacher()
    {
        cout<<"DEFAULT"<<endl;
    }
    teacher(teacher &obj)
    {
        this->name = obj.name;
        this->dept = obj.dept;
    }
    teacher(string name, string dept)
    {
        this->name = name;
        this->dept = dept;
    }
};

int main()
{
    teacher t1;
    t1.name="ridi";
    t1.dept="CSE";
    teacher t2(t1);
    cout<<t2.name<<endl;
    cout<<t2.dept<<endl;
    teacher t3("rita","EEE");
    teacher t4(t3);
    cout<<t4.name<<endl;
    cout<<t4.dept<<endl;

}
