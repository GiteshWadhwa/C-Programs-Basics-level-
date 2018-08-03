#include<stdio.h>
#include<conio.h>
 main()
{
 int num1,num2;
 printf("enter numbers:\n");
 scanf("%d%d",&num1,&num2);
 while(num1!=num2)
 {
   if(num1>num2)
   {
     num1=num1-num2;
   }
   else
   {
    num2=num2-num1;
   }
   printf("GCD/HCF of two numbers is %d",num1);
   getch();
   return 0;


 }



}
