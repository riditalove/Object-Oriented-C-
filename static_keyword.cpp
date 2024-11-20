#include<bits/stdc++.h>

using namespace std;

class Course
{
public:
    ;

    void show()//static keyword must be written within the function
    {
        static int stuCount=1;
        cout<<stuCount<<endl;
        stuCount++;
    }
};

int main()
{
    Course c1,c2,c3;
    c1.show();
    c2.show();
    c3.show();

}
