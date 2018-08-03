#include<stdio.h>
main()
{
 int num;
 printf("enter the number:");
 scanf("%d",&num);
 if((num/2)*2==num)
 printf("%d is even",num);

else
printf("%d is odd",num);
}
