#include<stdio.h>
int main()
{
 int size;
 printf("enter size:");
 scanf("%d",&size);
 int a[size],i,temp,j,min,loc;
 printf("enter elements:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 for(i=0;i<size;i++)
 {
     min=a[i];
     loc=i;
     for(j=i+1;j<size;j++)
     {
         if(min>a[j])
         {
           min=a[j];
           loc=j;
         }
     }
     temp=a[i];
         a[i]=a[loc];
         a[loc]=temp;
 }
 printf("elements after sort:");
 for(i=0;i<size;i++)
    printf("%d ",a[i]);
}
