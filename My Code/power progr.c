#include<stdio.h>
main()
{
 int x,y,i,p=1;
 printf("enter the value of x:");
 scanf("%d",&x);
 printf("enter the power of x:");
 scanf("%d",&y);
 for(i=1;i<=y;i++)
 {
  p=p*x;
 }
 printf("%d",p);
}
