#include <iostream>
using namespace std;
class Distance
{
    int dis_km;
    int dis_m;
public:
    Distance()
    {
        cout << "Enter distance in km: ";
        cin >> dis_km;
        cout << "Enter distance in metres: ";
        cin >> dis_m;
        cout << "Total dis is " << dis_km * 1000 + dis_m <<" metres "<< endl;
    }
    Distance(int a, int b)
    {
        dis_km = a;
        dis_m = b;
        cout << "Total dis is " << dis_km * 1000 + dis_m <<" metres "<< endl;
    }
    Distance(Distance &d)
    {
        dis_km = d.dis_km;
        dis_m = d.dis_m;
        cout << "Total dis is " << dis_km * 1000 + dis_m <<" metres "<< endl;
    }
};
int main()
{
    Distance x;          //Default constructor
    Distance x1(5, 123); //Parameterized constructor
    Distance x2(x);      //Copy constructor
    return 0;
}