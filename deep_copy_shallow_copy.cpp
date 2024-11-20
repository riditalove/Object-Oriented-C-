#include<bits/stdc++.h>

using namespace std;

class teacher{
public:
    string name;
    float* cgpaPtr = new float;

    teacher(teacher &obj)
    {
        this->name = obj.name;
        *cgpaPtr = *(obj.cgpaPtr);

    }

    teacher(string name,float cgpa)
    {
        this->name = name;

        *(cgpaPtr) = cgpa;
    }
    ~teacher()//destructor takes no arguments
    {
        delete cgpaPtr;
    }

};

int main()
{
    teacher t1("ridita",3.90);
    teacher t2(t1);
    cout<<t1.name<<endl;
    cout<<*(t1.cgpaPtr)<<endl;
    *(t2.cgpaPtr) = 3.89;
    t2.name="neha";
    cout<<t2.name<<endl;
    cout<<*(t1.cgpaPtr)<<endl;


}
