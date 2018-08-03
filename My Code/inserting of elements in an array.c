#include<stdio.h>
int main()
{
 int size;
 printf("enter size:");
 scanf("%d",&size);
 int a[size],i,p;
 printf("enter elements:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 printf("enter the position for inserting element::");
 scanf("%d",&p);
 if(p<1||p>size)
 {
     printf("invalid");
 }
 for(i=size;i>=p;i--)
 {
     a[i]=a[i-1];
 }
 printf("enter the new element:");
 scanf("%d",&a[p-1]);
 printf("after inserting:");
 for(i=0;i<=size;i++){
    printf("%d ",a[i]);
 }
}
