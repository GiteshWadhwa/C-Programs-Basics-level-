#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num&1)
    printf("entered number is %d = odd",num);
    else
    printf("entered number is %d = even",num);
}
