#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,total=0,rem;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    rem=num%10;
    num=num/10;
    total=total+rem*i;
    }
    printf("total number of digits are %d",i);
}
