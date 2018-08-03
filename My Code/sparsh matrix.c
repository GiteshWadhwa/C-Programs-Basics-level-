#include<stdio.h>
int main()
{
    int R,C;
    printf("enter no of Rows:");
    scanf("%d",&R);
    printf("enter no of Cols:");
    scanf("%d",&C);
    int a[R][C],i,j,counter=0;
    printf("enter elements in Matrix;");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                counter++;
            }
        }
    }
    if(counter>((R*C)/2))
    {
        printf("Sparsh matrix");
    }
    else
    {
        printf("not a sparsh matrix:");
        printf("there are %d no of zeros",counter);
    }

}
