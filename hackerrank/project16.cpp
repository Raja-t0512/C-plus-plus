#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseArray(vector<int> a)
{
    int temp;
    int n=a.size();
    for (int i = 0; i < n/2; i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    return a;
}
int main()
{
    
    return 0;
}
