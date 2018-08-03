#include<stdio.h>
int main()
{
    int R1,R2,C1,C2;
    printf("enter no of rows in matrix ist:");
    scanf("%d",&R1);
    printf("enter number of elements of cols in matrix ist");
    scanf("%d",&C1);
    int a[R1][C1],i,j;
    printf("enter elements in first matrix:");
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter no of rows im matrix 2nd:");
    scanf("%d",&R2);
    printf("enter no of cols in matrix 2nd:");
    scanf("%d",&C2);
    int b[R2][C2],flag;
    printf("enter elements in Second matrix:");
    for(i=0;i<R2;i++)
    {
        for(j=0;j<C2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if (R1==R2 && C1 == C2)
    {
        printf("Matrices can be compared \n");
        for (i = 0; i < R1; i++)
        {
            for (j = 0; j < C2; j++)
             {
                if (a[i][j] != b[i][j])
                {
                    flag = 0;
                    break;
                }
             }
        }
    }
    else
    {
        printf(" Cannot be compared\n");
        exit(1);
    }
    if (flag == 1)
        printf("Two matrices are equal \n");
    else
        printf("But, two matrices are not equal \n");
}


