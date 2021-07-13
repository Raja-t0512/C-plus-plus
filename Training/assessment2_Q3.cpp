#include<iostream>
using namespace std;

int main() 
{ 
    int P = -1; 
    try 
    { 
        cout << "Inside try";
        if (P < 0) 
        { 
            throw P;
            cout << "After throw"; 
        } 
    } 
    catch (int P ) 
    { 
        cout << "Exception Caught"; 
    } 
    cout << "After catch"; 
    return 0;
}