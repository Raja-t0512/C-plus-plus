#include <iostream>
using namespace std;
int main()
{
    int choice;
    float x;
    cout<<"\n\n";
    cout << "\t\t\t*****TEMPERATURE CONVERSION MENU*****" << endl;
    cout << "Press 1: Farenheit to Celsius\nPress 2: Celsius to Farenheit" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter temp in Farenheit: ";
        cin>>x;
        x=(x-32)/1.8;
        cout<<"The temp in Celsius is "<<x<<endl;
        break;
    case 2:
        cout<<"Enter temp in Celsius: ";
        cin>>x;
        x=1.8*x+32;
        cout<<"The temp in Farenheit is "<<x<<endl;
        break;

    default:
        cout<<"Press 1 or 2 only";
        break;
    }
    return 0;
}