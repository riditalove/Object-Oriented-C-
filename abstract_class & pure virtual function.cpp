#include<bits/stdc++.h>

using namespace std;

class CWH
{
protected:
    float rating;
    string title;
public:
    CWH(float r,string s)
    {
        rating = r;
        title = s;
    }
    virtual void display()=0;// you have to have to have to define the function in the derived classes

};

class CWHtext : public CWH
{
private:
   int text_count;
public:
    CWHtext(float r,string s,int t):CWH(r,s)
    {
        text_count = t;
    }
    void display()
    {
        cout<<rating<<endl;
        cout<<title<<endl;
        cout<<text_count<<endl;
    }

};


class CWHvid : public CWH
{
private:
   float len;
public:
    CWHvid(float r,string s,float l):CWH(r,s)
    {
        len = l;
    }
    void display()
    {
        cout<<rating<<endl;
        cout<<title<<endl;
        cout<<len<<endl;
    }

};

int main()
{
    CWH* tut[2];
    CWHvid v(4.5,"Ridita's video",10.6);
    CWHtext te(4.6,"Ridita's text",10);
    tut[0] = &v;
    tut[1] = &te;
    tut[0]->display();
    tut[1]->display();

}

//they can not be static
//they are accessed by object pointers
//virtual function can be friend of another class
//a virtual function might not be used, but pure virtual function must be redefined
// a virtual function is defined in the base class, there is no necessity to redefine, it's okay not to redefine, and it's okay //
// to redefine, no issue.... but but pure virtual function must be redefined by the derived class/classes
