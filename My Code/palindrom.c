#include<stdio.h>
#include<conio.h>
main()
{
 int num,rem,rev=0;
 printf("\n\n\tenter number:");
 scanf("%d",&num);
 while(num>0)
 {
   rem=num%10;
   rev=rev*10+rem;
   num=num/10;
}
printf("\n\n\t reverse of number is %d",rev);
getch();
return 0;
}
