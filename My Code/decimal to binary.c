#include<stdio.h>
main()
{
  int num,rem,b=0,i=1,x;
  printf("enter a decimal number:");
  scanf("%d",&x);
  num=x;
  while(num!=0)
  {
   rem=num%2;
   num=num/2;
   b=b+rem*i;
   i=i*10;

  }
  printf("Binary of the decimal number %d is %d",x,b);
}
