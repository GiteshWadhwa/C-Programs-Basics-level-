#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter nine digits for first matrix:");
    for(i=0;i<=2;i++)
     for(j=0;j<=2;j++)
         scanf("%d",&a[i][j]);
     printf("enter nine digits gor second matrix:");
     for(i=0;i<=2;i++)
      for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);
      printf("Multiplication of two matrix is \n");
      for(i=0;i<=2;i++)
      {
        for(j=0;j<=2;j++)
        {
          c[i][j]=a[i][j]*b[j][i];
          printf("%d  ",c[i][j]);
        }
        printf("\n");
      }

}
