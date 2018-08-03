#include<stdio.h>
#include<conio.h>
main()
{
    int  a[10],sum=0,i;
    float av;
    printf("enter 9 numbers:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];

    av=sum/10.0;
    }
        printf("Average is %f",av);

    getch();

}
