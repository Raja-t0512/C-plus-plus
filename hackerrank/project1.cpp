#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c;
    cout.precision(3);
    cout<<"\n"<<fixed<<d;
    cout.precision(9);
    cout<<"\n"<<e;
    return 0;
}
