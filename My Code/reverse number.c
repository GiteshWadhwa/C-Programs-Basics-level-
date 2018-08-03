#include<stdio.h>
#include<conio.h>
main()
{
 int num,rem,rev=0;
 printf("enter 4 digit number:");
 scanf("%d",&num);
 rem=num%10;
  num=num/10;
 rev=rev+rem*1000;
 rem=num%10;
 num=num/10;
 rev=rev+rem*100;
 rem=num%10;
 num=num/10;
 rev=rev+rem*10;
 rem=num%10;
 num=num/10;
 rev=rev+rem*1;
 printf("reverse of number is %d",rev);
}
