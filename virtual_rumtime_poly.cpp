#include<bits/stdc++.h>

using namespace std;

class BaseClass
{
private:
    int pri;
public:
    int pub=78;// we can't make a variable virtual
    virtual void show()
    {
        cout<<"It is a base class"<<endl;
    }
};

class DerivedClass : public BaseClass
{
private:
    int priv;
public:
    int pub = 89;
    void show()
    {
         cout<<"It is a Derived class"<<endl;
    }
};

int main()
{
    BaseClass* btr;
    DerivedClass drv;
    btr = &drv;
    btr->show();
    cout<<btr->pub<<endl; ; /* by default, if we want to point a child class with a parent class pointer,
    then the functions of parent class will be invoked, it is the default behavior, but if we add virtual add the beginning of
    the function of that parent class, then the function of child class will be invoked

}
