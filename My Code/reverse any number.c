#include<stdio.h>
#include<conio.h>
main()
{
 int num,rem,rev=0,i;
 printf("enter a number:");
 scanf("%d",&num);
 while(num!=0)
 {
 rem=num%10;
 num=num/10;
 rev=rev*10+rem;
 }
 printf("reverse = %d",rev);


}
