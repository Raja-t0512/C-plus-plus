#include<iostream>
using namespace std;
class Customer
{
    public:
    string First_name;
    string Last_name;
    void Set_name();
};
void Customer::Set_name()
    {
        cout<<"\nEnter your First name: ";
        cin>>First_name;
        cout<<"\nEnter your Last name: ";
        cin>>Last_name;
    }
class Account
{
    Customer C;
    float Balance;
    public:
    Account(Customer c1,float f)
    {
        C=c1;
        Balance=f;
        cout<<"Your name is "<<C.First_name<<" "<<C.Last_name<<" and";
        cout<<" your balance is "<<f<<endl;
    }
};
int main()
{
    Customer one;
    one.Set_name();
    float bal1,bal2;
    cout<<endl<<"Enter your balance of 1st account: ";
    cin>>bal1;
    cout<<endl<<"Enter your balance of 2st account: ";
    cin>>bal2;
    Account A1(one,bal1);
    Account A2(one,bal2);
    return 0;
}
