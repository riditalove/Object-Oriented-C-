#include<bits/stdc++.h>

using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {

    }
    Complex(int real,int img)
    {
        this->real = real;
        this-> img = img;
    }
    friend Complex sumFunc(Complex obj1, Complex obj2);
    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

//friend function

Complex sumFunc(Complex obj1, Complex obj2)
{
    Complex c3;
    c3.real = obj1.real + obj2.real;
    c3.img = obj1.img + obj2.img;
    return c3;

}


int main()
{
    Complex c1(2,3),c2(4,5),sum;
    c1.show();
    c2.show();
    sum = sumFunc(c1,c2);
    sum.show();

}

/*
----friend function is a non member function of the class, so we can't call it via creating the object of that class
----Complex c1;
----c1.friend_functim() -----> is invalid
----can be called in the public or private section of the class,, no difference is made
----It can not access directly any private member of the class, to access them ,it has to make objects
*/
