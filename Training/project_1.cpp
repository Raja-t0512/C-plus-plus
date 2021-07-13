#include <iostream>
using namespace std;

class Volume
{
    float length, breadth, height;

public:
    Volume(float l, float b, float h) //Parameterised Constructor
    {
        length = l;
        breadth = b;
        height = h;
    }
    void printVolume() //Function to return the volume
    {
        cout << endl
             << "Volume: " << length * breadth * height;
    }
};

int main()
{
    float l, b, h;
    cout << "Enter Length, Breadth and Height: ";
    cin >> l >> b >> h;
    Volume v(l, b, h); //Passing Parameters to constructor
    v.printVolume();
    return 0;
}
