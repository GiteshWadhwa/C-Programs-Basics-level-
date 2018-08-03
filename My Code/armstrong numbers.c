#include<stdio.h>
main()
{
int num,i,rem,a=0;
  printf("Armatrong number under 1000 are:");
  for(i=0;i<=1000;i++)
  {
      a=0;
      num=i;
      while(num!=0)
      {
   rem=num%10;
   num=num/10;
   a=a+rem*rem*rem;
      }

  if(a==i)
  {
      printf("\n%d",a);
  }

}}
