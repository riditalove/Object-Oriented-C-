#include<bits/stdc++.h>

using namespace std;

class student
{
public:
    float res;
};

int main()
{
    int x = 10;
    cout<<&x<<endl;
    cout<<*(&x)<<endl;

    student s1;
    cout<<&s1<<endl;
    s1.res=3.45;

    student* s2;
    s2 = &s1;
    cout<<(*s2).res<<endl;

}
