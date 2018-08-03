#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%5==0)
    printf("entered number is divisible by 5");
    else
    printf("entered number is not divisible by 5");
}
