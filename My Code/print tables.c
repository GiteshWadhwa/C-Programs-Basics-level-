#include<stdio.h>
#include<conio.h>
main()
{
 int num=10,i,x,table;
 printf("enter the value of table");
 scanf("%d",&x);
 for(i=1;i<=num;i++)
 {
    table=x*i;
 printf("%d\n",table);
 }
 getch();
 return 0;

}
