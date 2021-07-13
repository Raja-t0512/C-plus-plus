#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int a, n,sum=0;
    scanf("%d", &n);
    //Code to calculate the sum of the five digits on n.
    for(int i=0;i<5;i++)
    {
        a=n%10;
        sum = sum +  a;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}