#include<stdio.h>
main()
{
 int num,rem,d=0,i=0,sum=0,x;
 printf("enter a binary number:");
 scanf("%d",&x);
 num=x;
 while(num!=0)
 {
  rem=num%10;
  sum=sum+pow(2,i)*rem;
  num=num/10;
  i=i++;
 }
 printf("decimal of Binare number %d is %d",x,sum);
}
