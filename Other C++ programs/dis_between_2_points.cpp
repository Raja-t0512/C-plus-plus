#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int x, y;

public:
    friend void distance(Point, Point);
    Point(int a, int b);
    void display();
};

Point::Point(int a, int b)
{
    x = a;
    y = b;
}

void Point ::display()
{
    cout << "Your point is (" << x << "," << y << ")" << endl;
}
void distance(Point p1, Point p2)
{
    int x1, y1, x2, y2, dis;
    x1 = p1.x;
    x2 = p2.x;
    y1 = p1.y;
    y2 = p2.y;
    dis = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    cout << "Distance between 2 points is " << dis << endl;
}

int main()
{
    int x1,x2,y1,y2;
    cout<<"\t\t\t*****Enter 2 points***** "<<endl;
    cout<<"Enter x-coordinate of first point: "<<endl;
    cin>>x1;
    cout<<"Enter y-coordinate of first point: "<<endl;
    cin>>y1;
    Point p(x1, y1);
    p.display();
    cout<<"Enter x-coordinate of second point: "<<endl;
    cin>>x2;
    cout<<"Enter y-coordinate of second point: "<<endl;
    cin>>y2;
    Point q(x2, y2);
    q.display();
    distance(p, q);
    return 0;
}