#include<stdio.h>
main()
{
 int num,p;
 int prime(int);
 printf("enter a number:");
 scanf("%d",&num);
 prime(num);
}
prime(x)
{
    int i;
 for(i=2;i<=x-1;i++)

   if(x%i==0)
   break;
   if(x==i)
    printf("%d is prime number",x);
   else
    printf("%d is not prime number",x);
 }


