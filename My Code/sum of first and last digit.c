#include<stdio.h>
#include<conio.h>
main()
{
    int num,sum=0,rem,ld,fd;
    printf("enter 4digit number:");
    scanf("%d",&num);
    fd=num/1000;
    ld=num%10;
    sum=fd+ld;
    printf("sum of first and last digit is %d",sum);
    getch();
    return 0;
    }
