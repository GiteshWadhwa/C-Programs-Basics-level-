#include<stdio.h>
#include<conio.h>
main()
{
    int a[5][3],b[5][3],c[5][3],i,j;
    printf("enter 15 numbers for first matrix:");
    for(i=0;i<=4;i++)
        for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);
    printf("enter 15 numbers for second matrix:");
    for(i=0;i<=4;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);
    printf("Addition of two matrix is :");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=2;j++)
        {
           c[i][j]=a[i][j] + b[i][j];
            printf("%d  ",c[i][j]);
        }
            printf("\n");

    }
}
