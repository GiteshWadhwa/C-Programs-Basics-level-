#include<stdio.h>
#include<conio.h>
main()
{
 int num,s;
 int sum_of_digit(int);
 printf("eter a number:");
 scanf("%d",&num);
 s=sum_of_digit(num);
 printf("sum of entered digits is %d",s);
}
sum_of_digit(int x)
{
 int i,sum=0,rem;
 for(i=x;i>=0;i--)
 {
 rem=x%10;
 x=x/10;
  sum=sum+rem;}
  return(sum);

}
