#include <iostream>
using namespace std;
int main()
{
    double wl;
 
    cout << "\nEnter wl (in meters): ";
    cin >> wl; 
 
    if (wl >= 1E-2)
        cout << "Radio Waves" << endl;
    else if (wl <= 1E-2 && wl >= 1E-3)
        cout << "Microwaves" << endl;
    else if (wl <= 1E-3 && wl >= 7E-7)
        cout << "Infrared" << endl;
    else if (wl <= 7E-7 && wl >= 4E-7)
        cout << "Visible Light" << endl;
    else if (wl <= 4E-7 && wl >= 1E-8)
        cout << "Ultraviolet" << endl;
    else if (wl <= 1E-8 && wl >= 1E-11)
        cout << "X Rays" << endl;
    else if (wl <= 1E-11)
        cout << "Gamma Rays" << endl;
 
    cout << endl;
 
    return 0;
}
