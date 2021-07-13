#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("marks.dat",ios::out);
    char ans ='y';
    int rollno;
    float marks;
    while(ans=='y'|| ans=='Y')
    {
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter Marks: ";
        cin>>marks;
        file<<rollno<<"\n"<<marks<<"\n";
        cout<<"\n Want to enter more records?(Y/N)...";
        cin>>ans;
    }
    file.close();
    return 0;
}