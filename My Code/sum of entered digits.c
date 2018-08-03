#include<stdio.h>
main()
{
 int num,sum=0,rem;
 printf("enter number:");
 scanf("%d",&num);
 while(num>0)
 {
     rem=num%10;
     sum=sum+rem;
     num=num/10;
 }
 printf("sum of entered digits is %d",sum);

}
