#include<stdio.h>
int main()
{
 int size,round,temp;
 printf("enter size:");
 scanf("%d",&size);
 int i,a[size];
 printf("enter elements:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 for(round=1;round<size;round++)
 {
     for(i=0;i<size-1;i++)
     {
         if(a[i]>a[i+1])
         {
             temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
        }
     }
 }
 for(i=0;i<size;i++)
    printf("%d ",a[i]);
}
