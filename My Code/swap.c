#include<stdio.h>
main()
{
 int a,b,temp;
 printf("enter two numbers:");
 scanf("%d%d",&a,&b);
 temp=a;a=b;
 b=temp;
 printf("a=%d\nb=%d",a,b);


}
