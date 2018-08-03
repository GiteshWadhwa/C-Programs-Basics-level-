#include<stdio.h>
#include<conio.h>
main()
{
 int num,i;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 printf("%d ",(2*i)-1);
 getch();
 return 0;
}
