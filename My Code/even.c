#include<stdio.h>
main()
{
int i,a[10];
for(i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
    if(a[i]>0)
        printf("\n%d is positive",a[i]);
    else
        printf("\n%d is negative",a[i]);
    if(a[i]%2==0)
    printf("\n%d is even",a[i]);
    else
        printf("\n%d is odd",a[i]);
}
}

