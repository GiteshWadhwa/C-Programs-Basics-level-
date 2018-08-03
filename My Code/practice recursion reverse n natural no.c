#include<stdio.h>
main()
{
 int num;
 int rev(int);
 printf("enter a number:");
 scanf("%d",&num);
 rev(num);
}
rev(x)
{
    if(x>=1){
 printf(" %d",x);
 rev(x-1);}
}
