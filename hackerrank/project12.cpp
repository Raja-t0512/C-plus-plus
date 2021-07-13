#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size,x,y;
    cin>>size;
    vector<int> vec1;
    vector<int> vec2;
    vector<int>::iterator iter;
    for (int i=0; i<size; i++) 
    {
        cin>>x;
        vec1.push_back(x);
    }
    cin>>size;
    vec1.erase(vec1.begin()+(size-1));

    cin>>x;
    cin>>y;
    vec1.erase(vec1.begin()+(x-1),vec1.begin()+(y-1));
    cout<<vec1.size()<<endl;
    for (iter=vec1.begin(); iter!=vec1.end(); iter++) 
    {
        cout<<*(iter)<<" ";
    }
    return 0;
}
