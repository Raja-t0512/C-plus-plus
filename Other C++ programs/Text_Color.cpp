#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
    for (int i = 0; i < 16; i++)
    {
        SetConsoleTextAttribute(h, i);
        cout<<"Different Colors"<<endl;
    }
    return 0;
}

// Colour numbers

// BLACK 0
// BLUE 1, 
// GREEN 2, 
// CYAN 3, 
// RED 4, 
// MAGENTA 5,
// BROWN 6, 
// LIGHT GREY 7, 
// DARK GREY 8, 
// LIGHT BLUE 9,
// LIGHT GREEN 10, 
// LIGHT CYAN 11, 
// LIGHT RED 12, 
// LIGHT MAGENTA 13, 
// YELLOW 14, 
// WHITE 15, 