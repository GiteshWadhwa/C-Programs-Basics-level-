#include<stdio.h>
main()
{
 int num,i,rem,rev=0;
 printf("enter a number:");
 scanf("%d",&num);
 while(num)
{rem=num%10;
num=num/10;
rev=rev*10+rem;
}
printf("%d",rev);
}
