#include<stdio.h>
#include<conio.h>
main()
{
    int num,i;
    printf("enter  number:");
    scanf("%d",&num);
    for(i=2;num>1;i++)
    {
    while(num%i==0)
    {
        printf("prime factor are %d\n",i);
        num=num/i;
    }
    }
}
