#include<stdio.h>
int main()
{
  int R,C;
  printf("enter rows:");
  scanf("%d",&R);
  printf("enter columns:");
  scanf("%d",&C);
  int a[R][C],i,j,sum=0,sum1=0,diff=0;
  printf("enter elements in matrix:");
  for(i=0;i<R;i++)
  {
      for(j=0;j<C;j++)
      {
        scanf("%d",&a[i][j]);
      }
  }
  printf("upper triangle is \n");
   for(i=0;i<R;i++)
   {
       for(j=0;j<C;j++)
       {
           if(i<=j)
           {
            printf("%d ",a[i][j]);
           }else{
           printf("  ");
           }
        }
        printf("\n");
   }
   printf("lower triangle is \n");
   for(i=0;i<R;i++)
   {
       for(j=0;j<C;j++)
       {
           if(j<=i)
           {
            printf("%d ",a[i][j]);
           }else{
           printf("  ");
           }
        }
        printf("\n");
   }
}
