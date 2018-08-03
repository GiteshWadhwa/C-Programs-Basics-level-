#include<stdio.h>
int main()
{
int R,C;
printf("enter number of rows:");
scanf("%d",&R);
printf("enter number of columns:");
scanf("%d",&C);
int a[R][C],b[R][C],c[R][C],i,j,t[R][C];
printf("enter the elements in first matrix:");
for(i=0;i<R;i++)
{
    for(j=0;j<C;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the elements of second matrix:");
  for(i=0;i<R;i++)
  {
      for(j=0;j<C;j++)
      {
          scanf("%d",&b[i][j]);
      }
  }
  printf("Addition  OF MATRIX::\n");
  for(i=0;i<R;i++)
  {
      for(j=0;j<C;j++)
      {
          c[i][j]=a[i][j]+b[i][j];
          printf("%d ",c[i][j]);
      }
      printf("\n");
  }
  printf("\nTranspose :\n");
  for(i=0;i<R;i++)
  {
      for(j=0;j<C;j++)
      {
          t[i][j]=c[j][i];
          printf("%d ",t[i][j]);
      }
      printf("\n");
  }

}
