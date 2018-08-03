#include<stdio.h>
#include<conio.h>
main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
 if(num%2==0)
 {
  printf("\n%d number is Even.\n",num);
 }
 else
 {
  printf("\n%d number is odd\n",num);
 }
 getch();
 return 0;
}
