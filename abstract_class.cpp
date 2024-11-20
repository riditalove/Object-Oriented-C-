#include<bits/stdc++.h>

using namespace std;

class shape//abstract class, we can't make an object out of this class
{
public:
    virtual void draw()=0;//pure virtual finction
};

class circle : public shape
{
public:
    void draw()
    {
        cout<<"Draw a circle"<<endl;
    }
};

int main()
{
    circle c1;
    c1.draw();

}
