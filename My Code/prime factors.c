#include<stdio.h>
main()
{
 int num,i;
 printf("enter a number:");
 scanf("%d",&num);
for(i=2;i>1;i++)
 {
 while(num%i==0)
     {
        printf("\nprime factors are: %d",i);
        num=num/i;
     }
 }
}
