#include<stdio.h>
#include<conio.h>
int main()
{
 int num,rem,octal=0,i=1;
 printf("Enter Decimal Number:\n");
 scanf("%d",&num);
 while(num!=0)
 {
     rem=num%8;
     num=num/8;
     octal=octal+(rem*i);
     i=i*10;
 }
 printf("%d",octal);
 getch();
 return 0;




}
