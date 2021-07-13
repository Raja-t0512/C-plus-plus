#include <iostream>
using namespace std;
class Employee
{
    int Eid;
    char name[15];
    float salary;

public:
    void getdata();
    void display();
};
void Employee ::getdata()
{
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your Employee Id: " << endl;
    cin >> Eid;
    salary = 10000;
}
void Employee ::display()
{
    cout << "Your name: " << name << endl;
    cout << "Your Id: " << Eid << endl;
    cout << "Your salary: " << salary << endl;
}
int main()
{
    Employee e1;
    e1.getdata();
    e1.display();
    return 0;
}