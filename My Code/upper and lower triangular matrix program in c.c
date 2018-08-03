#include<stdio.h>
int main()
{
 int R,C;
 printf("enter rows:");
 scanf("%d",&R);
 printf("enter columns:");
 scanf("%d",&C);
 int a[R][C],i,j,sum=0,sum2=0;
 printf("enter elements in first matrix:");
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
             if(i<j)
          sum=sum+a[i][j];
          else if(i>j)
            sum2=sum2+a[i][j];
     }
 }
 printf("Sum of upper triangle is %d\n Sum of lower triangle is %d",sum,sum2);
}
