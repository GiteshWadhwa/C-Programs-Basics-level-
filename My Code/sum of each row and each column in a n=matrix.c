#include<stdio.h>
int main()
{
    int R,C;
    printf("enter Rows:");
    scanf("%d",&R);
    printf("enter columns:");
    scanf("%d",&C);
    int a[R][C],i,j,sum1=0,sum2=0;
    printf("enter elements in a matrix:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            sum1=sum1+a[i][j];
        }
        printf(" sum of %d rows is %d\n",i,sum1);
    sum1=0;
    }
    sum2=0;
    for(j=0;j<C;j++)
    {
        for(i=0;i<R;i++)
        {
            sum2=sum2+a[i][j];
        }
        printf("\nsum of %d colum is %d\n",j,sum2);
        sum2=0;
    }

}
