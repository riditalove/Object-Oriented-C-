#include<bits/stdc++.h>

using namespace std;

class Complex
{
private:
    int r;
    int i;
public:
    Complex(int a,int b)
    {
        r=a;
        i=b;
    }
    void print()
    {
        cout<<r<<endl;
        cout<<i<<endl;
    }
};

int main()
{
    //implicit call
    Complex c(1,2);
    c.print();

    //explicit call
    Complex b = Complex(5,7);
    b.print();



}
