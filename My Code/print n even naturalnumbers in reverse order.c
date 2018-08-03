#include<stdio.h>
main()
{
 int num,i;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=num-1;i>=0;i--)
 {
  printf("\n%d",2*i);
 }
}
