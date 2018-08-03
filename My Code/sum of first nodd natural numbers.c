#include<stdio.h>
#include<conio.h>
main()
{ int num,i,sum=0;
printf("enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
 sum=sum+(2*i)-1;
}
 printf("Sum of first odd natural numbers is %d",sum);
 getch();
 return 0;
}
