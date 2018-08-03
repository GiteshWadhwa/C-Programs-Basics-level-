#include<stdio.h>
main()
{
 int num,sum=0,i;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
  sum=sum+(2*i);
 }
 printf("sum of first %d even natural nmbers is %d",num,sum);
}
