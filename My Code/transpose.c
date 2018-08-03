#include<stdio.h>
int main()
{
    int R,C,i,j;
    printf("enter number of rows:");
    scanf("%d",&R);
    printf("enter number of columns:");
    scanf("%d",&C);
    int a[R][C];
    printf("enter the elements matrix:");
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
           printf("new  matrix:\n");
          for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
                printf("%d  ",a[j][i]);
            }
            printf("\n");
        }

}
