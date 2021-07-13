#include <iostream>
using namespace std;

class distance1
{
    int feet;
    int inches;

public:
    void get()
    {
        cout << "\n Enter the feet :";
        cin >> feet;
        cout << "\n Enter the inches: ";
        cin >> inches;
    }

    void display()
    {
        cout << "\n The value of feet is :" << feet;
        cout << "\n The value of inches is :" << inches;
    }

    distance1 operator + (distance1 ob2)
    {
        distance1 temp;
        temp.feet = feet + ob2.feet;
        temp.inches = inches + ob2.inches;
        if (temp.inches >= 12)
        {
            temp.feet+=1;
            temp.inches-=12;
        }
        return temp;
    }
};

int main()
{
    distance1 d, d1, d2;
    d.get();
    d1.get();
    d2 = d + d1;
    d2.display();
    return 0;
}