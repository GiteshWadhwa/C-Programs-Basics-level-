#include<stdio.h>
main()
{
 int num;
 int cube(int);
 printf("enter a number:");
 scanf("%d",&num);
 printf("%d",cube(num));
}
cube(int x)
{
 if(x/10==0)
 return (x*x*x);
 return ((x%10)*(x%10)*(x%10)+cube(x/10));
}
