#include<stdio.h>
main()
{
 int num,sum=0,i;
 printf("enter number:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
 sum=sum+i;
 }
 printf("sum of first %d digits =%d",num,sum);
}
