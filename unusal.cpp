#include<bits/stdc++.h>

using namespace std;

class X
{
    int a;
    int b;
public:
    X(int a,int b=89)
    {
        this->a = a;
        this->b = b;
    }
    void show();

};

void X:: show()
{
    cout<<a<<endl;
    cout<<b<<endl;
}

int main()
{
    X x(78);
    x.show();

}

