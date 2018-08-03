#include<stdio.h>
#include<conio.h>
main()
{
 int num1,num2,s;
 int sum(int ,int);
 printf("enter a number:");
 scanf("%d%d",&num1,&num2);
 s=sum(num1, num2);
 printf("sum=%d",s);
}
sum(int x,int y)
{
    int sum;
 sum=x+y;
 return(sum);
}
