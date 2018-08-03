#include<stdio.h>
int main()
{
 int num,rem,bin=0,i=1;
 printf("enter a number:");
 scanf("%d",&num);
 while(num)
 {
  rem=num%2;
  num=num/2;
  bin=bin+rem*i;
  i=i*10;
 }
 printf("%d",bin);
}
