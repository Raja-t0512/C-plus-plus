#include<iostream>
using namespace std;
class Car
{
    string name;
    int Engine_power;
    public:
    void setdata(string,int);
    void Display_car_details();
};
void Car::setdata(string s,int i)
{
    name=s;
    Engine_power=i;
}
void Car::Display_car_details()
{
    cout<<"Your car is "<<name<<endl;
    cout<<"Engine power is "<<Engine_power<<"cc"<<endl;
}
int main()
{
    int n;
    cout<<"Enter number of cars you want to insert: ";
    cin>>n;
    cout<<endl;
    Car c1[n];
    string x;
    int y;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter name of your car "<<i+1<<" : ";
        cin>>x;
        cout<<endl<<"Enter power of engine in cc: ";
        cin>>y;
        c1[i].setdata(x,y);
    }
    for (int i = 0; i < n; i++)
    {
        c1[i].Display_car_details();
    }
    return 0;
}