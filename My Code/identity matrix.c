#include<stdio.h>
int main()
{
    int R,C;
    printf("enter number of Rows:");
    scanf("%d",&R);
    printf("enter number of COLS:");
    scanf("%d",&C);
    printf("enter elements in Matrix:\n");
    int a[R][C],i,j,flag=1;
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
          if(a[i][j]!=1&&a[j][i]!=0)
          {
              flag=0;
              break;
          }
        }
    }
    if(flag==1)
        printf("identity matrix");
    else
        printf("not identity matrix");

}
