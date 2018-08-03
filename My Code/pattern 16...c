#include<stdio.h>
main()
{
 int i,j,k;
 for(i=1;i<=7;i++)
 {
     k=i;
  for(j=1;j<=7;j++)
  {

  if(j==k||j==8-k)
  {
      if(j==8-k)
          printf("/");
       else
        printf("\\");
  printf(" ");
  else
   printf("*");
  }
  printf("\n");
 }
}
