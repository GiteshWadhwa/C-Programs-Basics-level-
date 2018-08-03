#include<stdio.h>
main()
{
 int num,i,sum=0;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
  sum=sum+(2*i)-1;
 }
 printf("sum of first %d odd natural numbers is %d",num,sum);
}
