#include<stdio.h>
#include<conio.h>
main()
{
 int num,i;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=2;i<num;i++)
  if(num%i==0)
  break;
  if(num==i)
    printf("Prime Number");
 else
  printf("Composite Number");

}
