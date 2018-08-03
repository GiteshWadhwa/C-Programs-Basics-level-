#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int num,sum=0,i=0,var;
 printf("Enet A binary Number:\n");
 scanf("%d",&num);
 var=num;
 while(num!=0)
 {
   sum=sum+pow(2,i)*(num%10);
   num=num/10;
   i++;
 }
 printf("decimal number of the binary number %d is %d",var,sum);
 getch();
 return 0;



}
