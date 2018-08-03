#include<stdio.h>
main()
{
 int num,x,f=1;
 printf("enter a number:");
 scanf("%d",&num);
 x=num;
 while(x!=0)
 {
  f=f*x;
  x--;
 }
 printf("%d",f);
}
