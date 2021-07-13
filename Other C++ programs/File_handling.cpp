#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file1;
    file1.open("new.txt");
    file1<<"I am over-writing the file\nAye yo! ";
    file1.close();

    ifstream file2;
    file2.open("new.txt");
    string s;
    while(!file2.eof())
    {
        getline(file2,s);
        cout<<s<<endl;
    }
    file2.close();
    return 0;
}