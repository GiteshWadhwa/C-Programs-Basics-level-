#include<stdio.h>
main()
{
 int num1,num2;
 printf("enter two numbers:");
 scanf("%d%d",&num1,&num2);
 num1=num1+num2;
 num2=num1-num2;
 num1=num1-num2;
 printf("num1=%d\nnum2=%d",num1,num2);
}
