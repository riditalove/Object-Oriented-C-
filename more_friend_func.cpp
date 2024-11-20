#include<bits/stdc++.h>

using namespace std;

class Y;

class X
{
private:
   int val;
   void setValue(int val)
   {
       this->val=val;
   }

   friend void add(X,Y);
};

class Y
{
private:
   int value;
   void setValue(int value)
   {
       this->value=value;
   }
   friend void add(X,Y);
};

void add(X o1,Y o2)
{
    int a,b;
    cin>>a>>b;
    o1.setValue(a);
    o2.setValue(b);
    cout<<o1.val+o2.value<<endl;
}

int main()
{
    X x;
    Y y;
    add(x,y);

}
