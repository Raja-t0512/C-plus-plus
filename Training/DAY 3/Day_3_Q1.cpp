#include <iostream>
#include <math.h>
using namespace std;
void read_matrix()
{
    int m, n;
    cout << "Enter the number of rows your matrix: ";
    cin >> m;
    cout << "Enter the number of columns your matrix: ";
    cin >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void power()
{
    float base, exponent, result;
    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;
    result = pow(base, exponent);
    cout << base << "^" << exponent << " = " << result;
}
void largest_3()
{
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a << " is the largest number. ";
    else if (b > a && b > c)
        cout << b << " is the largest number. ";
    else
        cout << c << " is the largest number. ";
}
int main()
{
    int ch, x = 1;
    while (x != 0)
    {
        cout << "Press 1 to read a matrix\nPress 2 to find power of a number\nPress 3 to find largest of three numbers";
        cin >> ch;
        switch (ch)
        {
        case 1:
            read_matrix();
            break;
        case 2:
            power();
            break;
        case 3:
            largest_3();
            break;
        default:
            cout << "\nInvalid choice!";
            break;
        }
        cout << "Press 1 to perform more operations or press 0 to exit.";
        cin >> x;
    }
    return 0;
}