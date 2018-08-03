#include<stdio.h>
#include<conio.h>
main()
{
 int num,i,rem,sum=0;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=num;i>=0;i--)
 {
 rem=num%10;
 num=num/10;
 sum=sum+rem;
 }
 printf("%d",sum);


}
