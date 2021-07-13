#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int temp=*a;
     *a=*a+*b;
     *b=(temp)-(*b);
     if(*b<0)
     {
         *b=(*b)*(-1);
     }
}

int main() {
    int a, b;
    cin>>a>>b;
    int *pa = &a, *pb = &b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}