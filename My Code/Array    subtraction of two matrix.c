#include<stdio.h>
#include<conio.h>
main()
{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("enter 6 digits:");
    for(i=0;i<=1;i++)
     for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);
     printf("enter 6 digits:");
     for(i=0;i<=1;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);
     printf("Subtraction of two matrices is \n");
     for(i=0;i<=1;i++)
     {
         for(j=0;j<=2;j++)
         {
             c[i][j]= a[i][j] - b[i][j];
             printf("%d  ",c[i][j]);
         }
             printf("\n");
     }
}


