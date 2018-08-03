#include<stdio.h>
#include<conio.h>
main()
{
 int x,y,p=1,i;
 printf("enter the value of x:");
 scanf("%d",&x);
 printf("enter the value of power:");
 scanf("%d",&y);
 for(i=1;i<=y;i++)
 p=p*x ;
 printf("%d",p);
 getch();
}
