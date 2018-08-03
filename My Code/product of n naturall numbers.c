#include<stdio.h>
main()
{
 int num,i,prod=1;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
 prod=prod*i;
 }

 printf("Product of first %d numbers is %d",num,prod);
}
