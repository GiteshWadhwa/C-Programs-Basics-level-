#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num&1)
        printf("divisible by 5");
    else
        printf("not divisible by 5");
}
