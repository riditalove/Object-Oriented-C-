#include<bits/stdc++.h>

using namespace std;

//forward declaration

class Calculator;

class Complex;


class Calculator
{
public:


    int realAdd(Complex ,Complex );
    int imgAdd(Complex ,Complex );


};

class Complex
{
private:
    int real;
    int img;
   //individually declaring the function as friends
    friend int Calculator :: realAdd(Complex,Complex );
    friend int Calculator :: imgAdd(Complex,Complex );
    //altogehtar friend class
    friend class Calculator;

public:
    Complex()
    {

    }
    Complex(int real,int img)
    {
        this->real = real;
        this-> img = img;
    }

    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

//friend function of another class

int Calculator:: realAdd(Complex ob1,Complex ob2)
{
    return ob1.real + ob2.real;
}
int Calculator:: imgAdd(Complex ob1,Complex ob2)
{
    return ob1.img + ob2.img;
}


int main()
{
    Complex c1(1,2),c2(3,7);
    Calculator c3,c4;
    Complex sum(c3.realAdd(c1,c2),c4.imgAdd(c1,c2));
    sum.show();


}
