#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,temp;
 printf("enter two numbers:");
 scanf("%d%d",&a,&b);
 printf("entered numbers are %d & %d\n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("Swap \t a=%d\tb=%d",a,b);
 getch();
 return 0;
}
