#include<stdio.h>
int main()
{
 int a[10],i,temp,n,pos;
 printf("enter elements in array:");

 scanf("%d",&n);
 printf("enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("enter elements index u want to delete:");
 scanf("%d",&pos);
 for(i=pos;i<n;i++)
 {
 a[i]=a[i+1];

 }
 n--;
 printf("after deleting in array:");
 {
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}
}
