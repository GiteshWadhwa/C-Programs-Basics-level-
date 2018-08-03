#include<stdio.h>
int main()
{
    int R,C;
    printf("enter number of Rows:");
    scanf("%d",&R);
    printf("enter number of Columns:");
    scanf("%d",&C);
    int a[R][C],i,j,sum=0,x=0,normal=0,sum2=0;
    printf("enter elements in matrix:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
            x=a[i][j]*a[i][j];
            sum=sum+x;
        }
    }
    normal=sqrt(sum);
    printf("normal of matrix is %d",normal);
    for(i=0;i<R;i++)
    {
        sum2=sum2+a[i][i];
    }
    printf("\nTrace of matrix is %d",sum2);

}
