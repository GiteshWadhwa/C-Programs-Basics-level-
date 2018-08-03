#include<stdio.h>
#include<conio.h>
main()
{
 int c[3][3],d[3][3],e[3][3],i,j;
 printf("enter elements of first matrix:");
 for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
   scanf("%d",&c[i][j]);
   printf("enter elements of second matrix:");
   for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
    scanf("%d",&d[i][j]);
   printf("sum of two matrices is:\n");
   for(i=1;i<=3;i++)
   {
       for(j=1;j<=3;j++)
       {
           e[i][j]=c[i][j]+d[i][j];
           printf("%d ",e[i][j]);
       }
       printf("\n");
   }

}
