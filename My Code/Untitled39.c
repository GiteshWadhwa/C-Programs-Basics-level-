#include<stdio.h>
#include<conio.h>
main()
{
 int num,a=0,rem,x;
 printf("enter a number:");
 scanf("%d",&x);
 num=x;
 while(num!=0)
 {
   rem=num%10;
   a=a+rem*rem*rem;
   num=num/10;
 }
 if(a==x)
 {
 printf("armstrong ");
 }
 getch();
 return 0;
}
