#include<stdio.h>
int main()
{
 int a[3][3],i,j,sum=0,sum1=0,x;
 for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {

     scanf("%d",&a[i][j]);
    }
    }


for(i=0;i<=2;i++)
{
     for(j=0;j<=2;j++)
     {
         if(i==j)
 {
   sum=sum+a[i][i];

 }
     }
}

 printf("\t%d",sum);
for(i=2;i>=0;i--)
   {
       for(j=0;j<=2;j++)
        {
          if (i+j==2)
          {
              sum1=sum1+a[i][j];
          }
        }
   }
printf("\t%d",sum1);
}
