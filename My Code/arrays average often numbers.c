#include<stdio.h>
#include<conio.h>
main()
{
    int a[10],i,sum=0;
    float av;
    printf("enter marks of 10 students:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    av=sum/10.0;
    printf("Average is %.2f ",av);
}
