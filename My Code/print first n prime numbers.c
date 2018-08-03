#include<stdio.h>
#include<conio.h>
main()
{
 int num,i,j;
 printf("enter a number:");
 scanf("%d",&num);
while(num)
 {
   for(j=2;j<=num;j++)

    if(num%j==0)
    break;
    if(j==num)
    {
     printf("%d",j);
     num--;
    }
  j++;
   }

}
