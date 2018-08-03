#include<stdio.h>
main()
{
 int num;
 int sum(int);
 printf("enter a number:");
 scanf("%d",&num);
 printf("sum = %d",sum(num));
}
sum(int x)
{
 if(x/10==0)
    return(x);
 return(x%10+sum(x/10));
}
