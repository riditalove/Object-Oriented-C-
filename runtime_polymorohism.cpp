#include<bits/stdc++.h>

using namespace std;

class BaseClass
{
public:
    void getClass()
    {
        cout<<"This is BaseClass"<<endl;
    }

};

class DerivedClass : public BaseClass
{
public:
    void getClass()
    {
        cout<<"This is Derived Class"<<endl;
    }

};

int main()
{
    BaseClass* btr = new DerivedClass();
    btr->getClass();

    BaseClass* basePtr;
    DerivedClass dvr;
    basePtr = &dvr;
    basePtr->getClass();




}
