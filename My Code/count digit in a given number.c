#include<stdio.h>
#include<conio.h>
main()
{
 int num,i,rem,digit=1;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
     rem=num%10;
     num=num/10;
     digit=digit+rem*i;
 }
 printf("%d",i);

}
