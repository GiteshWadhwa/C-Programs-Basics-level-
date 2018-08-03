#include<stdio.h>
main()
{
 int num1,num2,add,sub,mul,mod;
 float div;
 printf("enter two numbers:");
 scanf("%d%d",&num1,&num2);
 add=num1+num2;
 printf("Sum=%d",add);

 if(num1>num2)
 {
  sub=num1-num2;
 }
 else
 {
  sub=num2-num1;
 }
 printf("\ndiff=%d",sub);
 mul=num1*num2;
 printf("\nproduct=%d",mul);
 div=num1/num2;
 printf("\nQuotient=%.1f",div);
 mod=num1%num2;
 printf("\nRemainder=%d",mod);
}
