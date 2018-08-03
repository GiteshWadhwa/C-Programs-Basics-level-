#include<stdio.h>
main()
{
 int num;
 int fibbona(int);
 printf("enter a number:");
 scanf("%d",&num);
 fibbona(num);
}
fibbona(x)
{
   int a=-1,b=1,c,i,sum=0;
   for(i=0;i<=x;i++){
   c=a+b;
   printf("%d ",c);
   sum=sum+c;
  a=b;
   b=c;}
printf("Sum=%d",sum);
}
