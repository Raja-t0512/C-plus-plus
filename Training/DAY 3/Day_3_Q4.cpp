#include <iostream>
using namespace std;

int g_c_d(int a, int b)
{

    if (a <= 0 || b <= 0)
        return 0;

    int divisor;
    divisor = (a <= b ? a : b);
    while (a % divisor != 0 || b % divisor != 0)
        divisor--;
    return divisor;
}

int main()
{
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout <<"GCD of these numbers is "<< g_c_d(n1, n2) << endl;
    return 0;
}
