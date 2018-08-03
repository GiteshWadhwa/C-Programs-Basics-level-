#include<stdio.h>
int main()
{
 int Rsize,Csize;
 printf("enter the Rsize of matrix::");
 scanf("%d",&Rsize);
 printf("enter the Csize of matrix::");
 scanf("%d",&Csize);
 int a[Rsize][Csize],b[Rsize][Csize],i,j,c[Rsize][Csize];
 printf("enter the elements of first matrix:");
 for(i=0;i<Rsize;i++)
 {
  for(j=0;j<Csize;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("enter the elements of second matrix:");
 for(i=0;i<Rsize;i++)
 {
     for(j=0;j<Csize;j++)
     {
         scanf("%d",&b[i][j]);
     }
 }

 for(i=0;i<Rsize;i++)
 {
     for(j=0;j<Csize;j++)
     {
         c[i][j]=a[i][j]+b[i][j];
         printf("%d ",c[i][j]);
     }
     printf("\n");
 }

}
