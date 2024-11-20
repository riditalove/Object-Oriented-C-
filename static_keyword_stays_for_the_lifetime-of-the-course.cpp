
#include<bits/stdc++.h>

using namespace std;

class ABC
{
public:
    ABC()
    {
        cout<<"Constructor calling"<<endl;
    }
    ~ABC()
    {
        cout<<"Destructor calling"<<endl;
    }
};

int main()
{
    if(true)
    {
        static ABC a;
    }
    cout<<"END OF THE PROGRAM"<<endl;

}
