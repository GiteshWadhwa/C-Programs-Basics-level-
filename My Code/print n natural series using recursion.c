#include<stdio.h>
main()
{
 int num,s;
 int series(int);
 printf("enter a number:");
 scanf("%d",&num);
 series(num);

}
series(x)
{

  if(x>=1)
  series(x-1);
  printf("%d ",x);
 }
