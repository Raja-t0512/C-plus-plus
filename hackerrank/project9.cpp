#include <iostream>
#include <iomanip>
#include<cstring>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double k,x;
    string l;
    cin>>j;
    cin>>k;
    getline(cin,l);
    cout<<i+j<<endl;
    x=d+k;
    cout<<setprecision(1)<<x<<endl;
    cout<<s+l;
    return 0;
}