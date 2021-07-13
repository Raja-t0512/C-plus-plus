#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int roll_no;
    char name[10];
    public:
        void set_data(int a, char b[])
        {
            roll_no=a;
            strcpy(name,b);
        }
        void get_data()
        {
            cout<<"Your name is "<<name<<" and your roll no. is "<<roll_no<<endl;
        }
};
int main()
{
    int size,i,x;
    char y[10];
    cout<<"Enter the number of students whose details you want to add"<<endl;
    cin>>size;
    Student *S,*temp;
    S= new Student[size];
    temp=S;
    for(i=0;i<size;i++)
    {
        cout<<"Enter roll number of Student "<<i+1<<": ";
        cin>>x;
        cout<<"Enter Name of Student "<<i+1<<": ";
        cin>>y;
        S->set_data(x,y);
        S++;
    }
    S=temp;
    for(i=0;i<size;i++)
    {
        S->get_data();
        S++;
    }
    return 0;
}