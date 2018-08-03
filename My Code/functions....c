#include<stdio.h>
#include<conio.h>
main()
{
int num,s;
int sumOfn_numbers(int);
printf("enter a number:");
scanf("%d",&num);
s=sumOfn_numbers(num);
printf("Sum of n digits is = %d",s);
getch();
}
sumOfn_numbers(int x)
{
    int rem,sumOfn_numbers=0,i;
    for(i=0;i<=x;i++)
    {
    sumOfn_numbers=sumOfn_numbers+i;
    }
    return(sumOfn_numbers);
}
