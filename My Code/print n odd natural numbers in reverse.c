#include<stdio.h>
main()
{
 int i,num;
 printf("enter number:");
 scanf("%d",&num);
 for(i=num;i>=1;i--)
 {
  printf("\n%d",(2*i)-1);
 }
}
