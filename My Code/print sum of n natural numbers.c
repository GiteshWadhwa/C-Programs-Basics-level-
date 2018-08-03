#include<stdio.h>
#include<conio.h>
main()
{
 int num,sum=0,i;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 sum=sum+i;
 printf(" sum = %d",sum);
 getch();
 return 0;
}
