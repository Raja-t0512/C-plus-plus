// Que2: Write a C++ program in which user enter his NTS and F.Sc marks
// and your program will help student in selection of university.
// Based on these marks Student will be allocated a seat at different
// department of different university University Name Departments
// Criteria Oxford University IT Above 70% in Fsc. and 70 % in NTS
// Electronics Engr: Above 70% in Fsc. and 60 % in NTS Telecommunication
// Above 70% in Fsc. and 50 % in NTS MIT IT 70% -60 % in Fsc. and 50 %
// in NTS Chemical Engr: 59% – 50 % in Fsc. and 50 % in NTS Computer Engr:
// Above 40% and below 50 % in Fsc. And 50 % in NTS
#include <iostream>
using namespace std;
int main()
{
    int fsc, nts;
    cout << "Enter Your Fsc Marks: ";
    cin >> fsc;
    cout << "Enter Your NTS Marks: ";
    cin >> nts;
    if(fsc<=40)
    {
        cout<<"You are not Qualified enough to join any university";
    }
    else if (fsc < 100)
    {
        if (fsc > 70)
        {
            if (nts >= 70)
            {
                cout << "\nOxford-IT Department.";
            }
            else if (nts >= 60)
            {
                cout << "\nOxford-Electronics Engr. Department.";
            }
            else if (nts >= 50)
            {
                cout << "\nOxford-Telecommunication Department.";
            }
        }
        else if (fsc <= 70)
        {
            if (fsc >= 60)
            {
                if (nts >= 50)
                {
                    cout << "\nMIT University-IT Department.";
                }
            }
            else if (fsc <= 59)
            {
                if (fsc >= 50)
                {
                    if (nts >= 50)
                    {
                        cout << "\nMIT-Chemical Engr. Department.";
                    }
                }
            }

            else if (fsc < 50)
            {
                if (fsc > 40)
                {
                    if (nts >= 50)
                    {
                        cout << "MIT-Computer Engr Department.";
                    }
                }
            }
        }
    }
    else
    {
        cout << "Invalid Marks!!!";
    }
    return 0;
}