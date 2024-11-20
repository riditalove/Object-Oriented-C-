#include<bits/stdc++.h>

using namespace std;

class Base
{
protected:
    int all=2;
private:
    int b=8;
public:
    int c=2;
    int getPri()
    {
        return b;
    }

};

class Derived : protected Base
{
public:
    void sum()
    {
        cout<<all*getPri()*c<<endl;
    }

};

class Derived1 : protected Derived
{
public:
    void sum()
    {
         cout<<all*getPri()*c*2<<endl;
    }
};

int main()
{
    Derived1 d;
    d.sum();

}
