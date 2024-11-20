#include<bits/stdc++.h>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    Complex(Complex ob1, Complex ob2)
    {
       this->real = ob1.getReal() + ob2.getReal();
       this->img = ob1.getImg() + ob2.getImg();
    }
    void showValue()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1(1,2),c2(3,4);
    Complex c3(c1,c2);
    c3.showValue();

}
