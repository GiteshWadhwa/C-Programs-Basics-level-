#include<stdio.h>
main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
 num&1?printf("%d is Odd",num):printf("%d is even",num);
}
