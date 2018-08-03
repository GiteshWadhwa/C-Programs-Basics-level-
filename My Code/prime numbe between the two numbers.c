#include<stdio.h>
main()
{
 int i,j;
 for(j=1;j<=100;j++)
  {
      for(i=2;i<j;i++)
   if(j%i==0)
   break;
  if(j==i)
  {
      printf("\t%d",i);
  }
} }


