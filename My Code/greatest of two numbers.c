#include<stdio.h>
#include<conio.h>
main()
{
 int num1,num2;
 printf("enter two numbers:");
 scanf("%d%d",&num1,&num2);
 if(num1>num2)
 printf("%d is greater than %d",num1,num2);
 else if(num2>num1)
 printf("%d is greater than %d",num2,num1);
 getch();
 return 0;
}
