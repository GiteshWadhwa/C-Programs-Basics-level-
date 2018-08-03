#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num/5*5==num)
        printf("divisible by 5");
    else
        printf("not divisible by 5");
}
