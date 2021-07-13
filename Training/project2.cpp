#include <iostream>
using namespace std;
//printn function below are an example of function overloading
class PrintNumber
{
public:
    void printn(int a)
    {
        cout<<a<< endl;
    }
    void printn(float a)
    {
        cout<<a<< endl;
    }
    void printn(double a)
    {
        cout<<a<<endl;
    }
};
int main()
{
    PrintNumber obj; //making an object of class 
    obj.printn(2);
    obj.printn(2.5);
    obj.printn(2.123456);
    return 0;
}
