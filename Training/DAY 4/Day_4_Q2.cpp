#include <iostream>
using namespace std;
int main()
{
    double wt, ht, BMI;
    cout << "Enter weight in pounds:\n";
    cin >> wt;
    cout << "Enter height in inches:\n";
    cin >> ht;
    BMI = wt * 703 / (ht * ht);
    if (BMI <= 18.5)
    {
        cout << "You are underweight.\n";
    }
    else if (BMI > 18.5 && BMI <= 25)
    {
        cout << "Your weight is optimal.\n";
    }
    else
    {
        cout << "You are overweight.\n";
    }
    return 0;
}
