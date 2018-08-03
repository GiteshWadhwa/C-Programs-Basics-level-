#include<stdio.h>
main()
{
 int num;
 int square(int);
 printf("enter a number:");
 scanf("%d",&num);
 printf("sum = %d",square(num));
}
square(int x)
{
if(x/10==0)
return (x*x);
 return ((x%10)*(x%10)+square(x/10));
}
