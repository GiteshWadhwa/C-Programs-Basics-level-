#include<stdio.h>
main()
{
 int num,i,digit=1,rem;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
{
  rem=num%10;
  num=num/10;
  digit=digit*i;
}
printf("Total no of digits are %d",i);

}
