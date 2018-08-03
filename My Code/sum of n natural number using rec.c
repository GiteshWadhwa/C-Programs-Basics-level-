#include<stdio.h>
int sum(int);

main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
 printf("sum = %d",sum(num));
}
int sum(int x)
{
 if(x!=0)
 return x+sum(x-1);
 else
 return x;
}
