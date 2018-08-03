#include<stdio.h>
main()
{
 int num1,num2;
 printf("enter two number:\n");
 scanf("%d%d",&num1,&num2);
 while(num1!=num2)
 {
 if(num1>num2)
 num1=num1-num2;
 else
 if(num2>num1)
 num2=num2-num1;
 }
 printf("HCF IS %d",num1);

}
