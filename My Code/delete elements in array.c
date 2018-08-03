#include<stdio.h>
int main()
{
 int size,i,e;
 printf("enter size:");
 scanf("%d",&size);
 int a[size];
 printf("enter elements:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
printf("enter position of element u want to delete:");
scanf("%d",&e);
for(i=e;i<size;i++)
{
    a[i]=a[i+1];
}
    size--;

printf("element after delete:");
for(i=0;i<size;i++)
    printf(" %d ",a[i]);
}
