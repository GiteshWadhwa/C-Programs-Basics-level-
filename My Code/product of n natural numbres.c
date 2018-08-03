#include<stdio.h>
#include<conio.h>
main()
{
 int num,i,product=1;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
   product= product*i;
}
  printf("%d",product);

}
