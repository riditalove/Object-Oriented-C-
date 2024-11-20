#include<bits/stdc++.h>

using namespace std;

class Point
{
private:
    int x;
    int y;
    friend void dist(Point, Point);
public:
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
};

void dist(Point o1,Point o2)
{
    int dist_x = pow((o1.x - o2.x),2);
    int dist_y = pow((o1.y - o2.y),2);

    cout<< sqrt(dist_x + dist_y)<<endl;
}

int main()
{
    Point p1(1,0),p2(70,0);
    dist(p1,p2);

}
