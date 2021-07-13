#include <iostream>
using namespace std;
class Complex;

class Calculator
{
public:
    int SumReal(Complex arr , int size);
    int SumComplex(Complex arr , int size);
};

class Complex
{
private:
    int a, b;
    friend class Calculator;

public:
    void getdata();
    void display();
};

void Complex::getdata()
{
    static int i = 1;
    cout << "\nEnter real part of " << i << " complex no.: ";
    cin >> a;
    cout << "\nEnter imaginary part of " << i << " complex no.: ";
    cin >> b;
    i++;
}
void Complex ::display()
{
    cout << a << " + " << b << "i" << endl;
}
int Calculator::SumReal(Complex arr, int size)
{
    static int sum;
    sum+=arr.a;
    return sum;
}
int Calculator::SumComplex(Complex arr, int size)
{
    static int sum;
    sum+=arr.b;
    // i++;
    return sum;
}
static int sum=0;
int main()
{
    int n, sr = 0, sc = 0;
    Complex x[10];
    cout << "Enter the number of complex numbers you want to add: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        x[i].getdata();
    }
    cout << "Your numbers are: " << endl;
    for (int i = 0; i < n; i++)
    {
        x[i].display();
    }
    Calculator calc;
    for (int i = 0; i < n; i++)
    {
        sr = calc.SumReal(x[i], n);
        sc = calc.SumComplex(x[i],n);
    }
    cout << "\nSum of real part of complex numbers is " << sr;
    cout << "\nSum of Complex part of complex numbers is " << sc;
    return 0;
}