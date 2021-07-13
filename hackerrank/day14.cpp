#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int>x)
    {
        elements=x;
    }
    void computeDifference()
    {
        vector<int>::iterator it;
        vector<int>::iterator i;
        int max=0;
        for (it=elements.begin(); it!=elements.end(); it++) 
        {
            for (i=elements.begin(); i!=elements.end(); i++) 
            {
                
                int x=*i-*it;
                if(x<0) 
                {
                     x=-x;
                }
                if(max<x)
                {
                    max=x;
                }
            }
        }
        maximumDifference=max;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}