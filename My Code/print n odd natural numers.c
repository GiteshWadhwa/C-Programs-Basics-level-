#include<stdio.h>
main()
{
 int i,num;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  printf("\n%d",(2*i)-1);
 }
}
