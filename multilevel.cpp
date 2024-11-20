#include<bits/stdc++.h>

using namespace std;

class Student
{
protected:
    int rollno;
public:
    string name;
    Student(string name,int r)
    {
        this->name = name;
        rollno=r;
    }
    void showS()
    {
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};

class Exam : protected Student
{
protected:
    string sub_name;
public:
    Exam(string name,int r,string sub_name):Student(name,r)
    {
        this->sub_name = sub_name;
    }
    void showE()
    {
        cout<<sub_name<<endl;
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};

class Marks : private Exam
{
private:
    int marks;
public:
    Marks(string name,int r,string sub_name,int marks):Exam(name,r,sub_name)
    {
        this->marks = marks;
    }
    void showM()
    {
        cout<<sub_name<<endl;
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<marks<<endl;
    }
};

int main()
{
   Marks e("Ridita",69,"CSE",89);
   e.showM();
}
