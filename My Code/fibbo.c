#include<stdio.h>
main()
{
 int a=-1,b=1,c,num,i;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
  c=a+b;
   printf("%d ",c);
  a=b;
  b=c;
 }


}
