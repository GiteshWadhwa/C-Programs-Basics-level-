#include<stdio.h>
main()
{
 int i,j,k;
 for(i=1;i<=6;i++)
 {
     k=1;
  for(j=1;j<=6;j++)
  {
   if(j>=1&&j<=i){
   printf("%d",k);
   k=1-k;}
   else
   printf(" ");
  }
  printf("\n");
 }
}
