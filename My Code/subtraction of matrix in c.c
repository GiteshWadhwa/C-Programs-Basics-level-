#include<stdio.h>
int main()
{
    int R,C;
    printf("enter the row size:");
    scanf("%d",&R);
    printf("enter the column size:");
    scanf("%d",&C);
    int a[R][C],b[R][C],c[R][C],i,j;
    printf("enter elements in first matrix:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of seconf matrix:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
