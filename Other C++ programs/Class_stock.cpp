#include <iostream>
#include <string>
using namespace std;
class STOCK
{
    int ICode;
    char Item[10];
    float Price;
    int Qty;
    float Discount;
    void FindDisc();

public:
    void Buy();
    void ShowAll();
};
void STOCK ::FindDisc()
{
    if (Qty <= 50)
        Discount = 0;
    else if (50 < Qty <= 100)
        Discount = 5;
    else
        Discount = 10;
}
void STOCK ::Buy()
{
    cout << endl
         << "Enter Item Code: ";
    cin >> ICode;
    cout << endl
         << "Enter Item Name: ";
    cin >> Item;
    cout << endl
         << "Enter Item Price: ";
    cin >> Price;
    cout << endl
         << "Enter Item Quantity: ";
    cin >> Qty;
    FindDisc();
}
void STOCK ::ShowAll()
{
    cout << endl
         << "Item Code: " << ICode;
    cout << endl
         << "Item Name: " << Item;
    cout << endl
         << "Item Price: " << Price;
    cout << endl
         << "Item Quantity: " << Qty;
    cout << endl
         << "DISCOUNT: " << Discount;
}
int main()
{
    STOCK S;
    S.Buy();
    S.ShowAll();
    return 0;
}