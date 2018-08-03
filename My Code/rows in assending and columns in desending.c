#include<stdio.h>
int main()
{
    int R,C;
    printf("enter no of rows:");
    scanf("%d",&R);
    printf("enter no of cols:");
    scanf("%d",&C);
    int a[R][C],i,j,round,temp1,temp2,b[R][C];
    printf("enter elements in Matrix:");
     for(i=0;i<R;i++)
     {
         for(j=0;j<C;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }

    printf("\nArranging of rows in assending order:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            for(round=1;round<R-1;round++)
            {
                     for(i=0;i<R;i++)
                {

                    if(a[i][j]>a[i][round])
                    {
                    temp1=a[i][j];
                    a[i][j]=a[i][round];
                    a[i][round]=temp1;
                }
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
    printf("\nArranging the column in desending order:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            for(round=1;round<C-1;round++)
            {
                {
                    for(i=0;i<C;i++)
               {
                if(b[i][j]<b[round][j])
                {
                    temp2=b[i][j];
                    b[i][j]=b[round][j];
                    b[round][j]=temp2;
                }
            }
                }
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}
}
}
