#include<stdio.h>
#include<conio.h>
main()
{
    int num,i;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
        if(num%i==0)
         break;

    if(i==num)
    printf("%d is a prime number!",num);
    else
    printf("%d is not a prime number!",num);
}
