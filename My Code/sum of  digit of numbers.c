#include<stdio.h>
#include<conio.h>
main()
{
  int num,rem,sum=0;
  printf("enter four digit numbet:");
  scanf("%d",&num);
  rem=num%10;
  num=num/10;
  sum=sum+rem;
  rem=num%10;
  num=num/10;
  sum=sum+rem;
  rem=num%10;
  num=num/10;
  sum=sum+rem;
  rem=num%10;
  num=num/10;
  sum=sum+rem;
  printf("%d",sum);
}
