#include <stdio.h>
int main()
{
    int i,a[]={5,2,7,2,8};
    int *p=a; //or *p=&a[0];
    for(i=0;i<5;i++)
    printf("%d",a[i]);
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d",*(a+i));
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d",*(i+a));
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d",i[a]);
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d",*(p+i));
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d",*(i+p));
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d",p[i]);
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d",i[p]);
    printf("\n");
return 0;    
}