#include<bits/stdc++.h>

using namespace std;

class c2;

class c1
{
private:
    int value;
    friend void exchange(c1 &,c2 &);
public:
    void setData(int a)
    {
        value = a;
    }
    void getData(void)
    {
        cout<<value<<endl;
    }

};

class c2
{
private:
    int val;
    friend void exchange(c1 &,c2 &);
public:
    void setData(int a)
    {
        val = a;
    }
    void getData(void)
    {
        cout<<val<<endl;
    }

};

void exchange(c1 &x, c2 &y)
{
    int a = x.value;
    x.value = y.val;
    y.val = a;

    cout<<x.value<<endl;
    cout<<y.val<<endl;

}

int main()
{

}
