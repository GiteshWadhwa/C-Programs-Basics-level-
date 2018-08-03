#include<stdio.h>
int main()
{
    int R,C;
    printf("enter number of Rows:");
    scanf("%d",&R);
    //r-i-1
    printf("enter number of columns:");
    scanf("%d",&C);
    int a[R][C],i,j,sum=0,A=0,b[R][C];
    printf("enter elements in matrix:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<R;i++)
    {
        sum=sum+a[i][i];
        A=A+a[i][R-i-1];

    }

            printf("\nsum of main diagonal is %d",sum);
          printf("\nsum of opposite diagonal is %d\n",A);
          printf("main Diagonal elements are:");
          for(i=0;i<R;i++)
          {
              printf(" %d",a[i][i]);
          }
          printf("\nOpposite Diagonal Elements Are:");
          for(i=0;i<R;i++)
          {
              printf(" %d",a[i][R-i-1]);
          }
          printf("\nDiagonal Difference is:\n");
          for(i=0;i<R;i++)
          {
              for(j=0;j<C;j++)
              {
                  b[i][j]=a[i][i]-a[i][R-i-1];
                  printf("%d ",b[i][j]);
              }
          printf("\n");

          }
}
