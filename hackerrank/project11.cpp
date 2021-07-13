#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
        virtual void getdata(){}
        virtual void putdata(){}
};
class Professor : public Person
{
    int publications;
    int cur_id;
    public:
    static int i;
    Professor()
    {
        cur_id=++i;
    }
        void getdata();
        void putdata();
};
void Professor ::getdata()
{
    cin>>name;
    cin>>age;
    cin>>publications;
}
void Professor ::putdata()
{
    cout<<name<<" ";
    cout<<age<<" ";
    cout<<publications<<" ";
    cout<<cur_id<<" "<<endl;
}
class Student : public Person
{
    int marks[6];
    int cur_id;
    public:
    static int i;
        Student()
        {
            cur_id=++i;
        }
        void getdata();
        void putdata();
};
void Student ::getdata()
{
    cin>>name;
    cin>>age;
    for(int i=0;i<6;i++)
    {
        cin>>marks[i];
    }
}
void Student ::putdata()
{
    int sum=0;
    cout<<name<<" ";
    cout<<age<<" ";
    for(int i=0;i<6;i++)
    {
       sum += marks[i];
    }
    cout<<sum<<" "<<cur_id<<endl;
}
int Professor :: i=0;
int Student :: i=0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
