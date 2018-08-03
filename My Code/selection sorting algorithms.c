#include<stdio.h>
int main()
{
 int size,l,u,mid,e,i;
 printf("enter size:");
 scanf("%d",&size);
 int a[size];
 printf("enter elements:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 printf("enter element u want to search:");
 scanf("%d",&e);
 l=a[0];
 u=size;
 while(l<u)
 {
 mid=(l+u)/2;
   if(a[mid]=e)
   {
    printf("element found!");
    break;
   }
   else if(e>a[mid])
   {
    l=mid+1;
   }
   else
   {
    u=mid-1;
   }
 }
}
