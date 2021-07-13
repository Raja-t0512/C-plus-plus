#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec1;
    int N,x;
    cin>>N;
    for (int i=0; i<N; i++) {
        cin>>x;
        vec1.push_back(x);
    }
    int Q;
    cin>>Q;
    for (int i=0; i<Q; i++) {
        cin>>x;
        vector<int>::iterator iter;
        iter = lower_bound(vec1.begin(),vec1.end(),x );
        if (vec1[iter - vec1.begin()]==x)
            cout << "Yes " << iter - vec1.begin() + 1 << endl;
        else
            cout << "No " << iter - vec1.begin() + 1 << endl;
    }
    return 0;
}
