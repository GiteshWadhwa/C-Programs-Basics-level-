#include<stdio.h>
main()
{
 int num,i;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=2;i<=num-1;i++)
 if(num%i==0)
 break;
 if(num==i)
 {
  printf("\nentered number %d is prime number:",num);
 }
 else
    {
    printf("\nentered number %d is not a prime number:",num);
 }
}
