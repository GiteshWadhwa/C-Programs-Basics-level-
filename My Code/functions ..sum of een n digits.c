#include<stdio.h>
#include<conio.h>
main()
{
    int num,s;
    int sumOfn_evenDigits(int);
    printf("enter a number:");
    scanf("%d",&num);
    s=sumOfn_evenDigits(num);
    printf("%d",s);
    getch();
}
sumOfn_evenDigits(int x)
{
    int i,sumOfn_evenDigits=0;
    for(i=0;i<x;i++)
    {
      sumOfn_evenDigits=sumOfn_evenDigits+(i*2);
    }
    return(sumOfn_evenDigits);
}
