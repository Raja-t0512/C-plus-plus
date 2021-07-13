#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
class METROPOLIS
{
private:
    int Mcode;
    char Mname[20];
    long int MPop;
    float Area;
    float PopDens;
    void CallDen()
    {
        PopDens = MPop / Area;
    }

public:
    METROPOLIS() {}
    void Enter();
    void ViewAll();
    ~METROPOLIS() {}
};

void METROPOLIS::Enter()
{
    cout<<endl
        <<"Enter Code: ";
    cin>>Mcode;
    cout<<endl
        <<"Enter Name: ";
    cin>>Mname;
    cout<<endl
        <<"Enter Population: ";
    cin>>MPop;
    cout<<endl
        <<"Enter Area Covered: ";
    cin>>Area;
    CallDen();
}

void METROPOLIS::ViewAll()
{
    cout<<endl
        <<"Code: "<<Mcode;
    cout<<endl
        <<"Name: "<<Mname;
    cout<<endl
        <<"Population: "<<MPop;
    cout<<endl
        <<"Area Covered: "<<Area;
    cout<<endl
        <<"Population Density: "<<PopDens;
        if(PopDens>12000)
        cout<<endl<<"Highly Populated Area!";
}

int main()
{
    METROPOLIS M;
    M.Enter();
    M.ViewAll();
    return 0;
}