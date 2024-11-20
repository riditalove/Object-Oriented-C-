#include<bits/stdc++.h>

using namespace std;

class teacher
{
public:
    string name;
    string dept;
    teacher(teacher &obj)
    {
        this->name = obj.name;
        this->dept = obj.dept;
    }
};

int main()
{
    teacher t1;// it will give an error // no matching function to call ,because we override the
    t1.name = "ridita";
    t1.dept = "CSE";
    teacher t2(t1);
    cout<<t2.name<<endl;
    cout<<t2.dept<<endl;

}
