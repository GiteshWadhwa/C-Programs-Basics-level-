#include<stdio.h>
#include<conio.h>
main()
{
   int bsalary,hra,da,grosspay;
   printf("enter the basic salary of employee:\n");
   scanf("%d",&bsalary);
   hra=bsalary*0.4;
   da=bsalary*0.2;
   grosspay=bsalary+hra+da;
   printf("\n\t\nbasic salary = %d ",bsalary);
   printf("\n\t\nHRA = %d ",hra);
   printf("\n\t\nDA = %d ",da);
   printf("\n\ngrosssalary = %d ",grosspay);
   getch();
   return 0;
}
