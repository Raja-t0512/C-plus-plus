#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("file.txt");
    file<<"hello",13;
    file.seekp (8);
    file<< "how r u", 6;
    return 0;
}