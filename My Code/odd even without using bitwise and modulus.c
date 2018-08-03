#include<stdio.h>
#include<conio.h>
main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
 if(num/2*2==num)

 printf("%d is even ",num);
 else
 printf("%d is odd ",num);
 getch();
 return 0;
}
