#include<stdio.h>
main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
 if(num%5==0)
 {
  printf("%d is multiple of 5!!",num);
 }
 else
 {
  printf("%d is not a multiple of 5!!",num);
 }
}
