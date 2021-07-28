#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));  //done to get different output everytime the program runs
    cout<<" 10 random numbers from 0-9"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<< rand()%10<<endl; //number b/w 0-9
    }
    cout<<"Random numbers b/w 4-10"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<< (rand()%5)+5<<endl; //number b/w 4-10
    }
    return 0;
}