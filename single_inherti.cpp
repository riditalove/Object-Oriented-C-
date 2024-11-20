#include<bits/stdc++.h>

using namespace std;

class Base
{
private:
    int b1;
public:
    int b2;
    void setData(int , int);
    int getB1();
    int getB2();

};

void Base:: setData(int a,int b)
{
    b1 = a;
    b2 = b;
}

int Base :: getB1()
{
    return b1;
}

int Base :: getB2()
{
    return b2;
}


class derived : private Base
{
private:
    int d,d2;
public:

    derived(int de,int de1 )
    {
        d = de;
        d2 = de1;
    }

    void mul()
    {
        setData(d,d2);// always write the functions of the other class under a function of the current class..it is true for static keyword,we have to use static within a function scope
        cout<<getB1()*getB2()<<endl;
    }


};

int main()
{
    derived d(2,3);
    d.mul();

}
