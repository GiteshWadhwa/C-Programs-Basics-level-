#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 printf("enter two numbers:");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("awap :\ta=%d b=%d",a,b);
 getch();
 return 0;
}
