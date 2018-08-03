#include<stdio.h>
#include<conio.h>
main()
{
 int num1,num2;
 printf("enter two nmbers:");
 scanf("%d%d",&num1,&num2);
 while(num1!=num2)

 if(num1>num2)
 {
  num1=num1-num2;
 }
 else
 if(num2>num1)
 {
  num2=num2-num1;
 }
 printf("%d",num1);

}

