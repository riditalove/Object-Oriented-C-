#include<bits/stdc++.h>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(void);//default constructor
    void Print(void);
};

void Complex :: Print(void)
{
    cout<<real<<" + "<<img<<"i"<<endl;
}
Complex :: Complex(void)
{
    real =10;
    img = 10;
}

int main()
{
    Complex c;
    c.Print();

}
// constructor characteristics:
// it should be declared on the public section
// they don't have return type, not even void
// it can have default arguments
// we can not refer to their address
