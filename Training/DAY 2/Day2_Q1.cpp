/* Que1: Write a C++ program that will display if a students is pass
or not in his exam. (50% or more is pass). If the student is Pass 
than your program should display which letter the student has obtained.
?? 85% or more E for excellent ?? 75% or more but less than 
85% O for Outstanding ?? 65% or more but less than 75% G for good ?? 
Less than 65% S for satisfactory If however the student is Fail 
(below 50% marks) your program should display: whether the 
student should Resit or Redo depending on the following criteria.
?? 33% or more Resit in exam ?? Less than 33% Redo course  */
#include <iostream>
using namespace std;
int main()
{
    int per;
    cout << "Enter your percentage: ";
    cin >> per;
    if (per >= 50)
    {
        if (per >= 85)
        {
            cout << "E";
        }
        else if (per >= 75)
        {
            cout << "O";
        }
        else if (per >= 65)
        {
            cout << "G";
        }
        else
            cout << "S";
    }
    else if (per >= 33)
    {
        cout << "Resit in exam.";
    }
    else
    {
        cout << "Redo course.";
    }
    return 0;
}