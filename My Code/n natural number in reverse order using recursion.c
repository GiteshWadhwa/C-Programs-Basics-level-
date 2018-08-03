#include<stdio.h>
main()
{
 int num;
 int rev(int);
 printf("enter a number:");
 scanf("%d",&num);
 rev(num);
}
rev(int x)
{
    int r;
    if(x>=1){
  r=x*rev(x-1);}
 printf("%d",r);
}
