#include<stdio.h>
int main()
{
    int R,C;
    printf("enter rows:");
    scanf("%d",&R);
    printf("enter cols:");
    scanf("%d",&C);
    int a[R][C],b[R][C],i,j,even=0,odd=0;
    printf("enter elements in array:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);

    if((a[i][j]%2)==0)
    {
        even++;
    }
    else
        {
        odd++;
    }
    }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("even numbers are: %d",even);
    printf("\nodd number are: %d",odd);
}
