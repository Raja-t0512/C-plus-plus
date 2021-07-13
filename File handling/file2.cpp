#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("CU.txt");
    file<<"Welcome to CU";
    file.close();
    return 0;
}
