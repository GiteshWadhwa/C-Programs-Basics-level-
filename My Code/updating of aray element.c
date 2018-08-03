#include<stdio.h>
int main()
{
 int size;
 printf("enter size:");
 scanf("%d",&size);
 int a[size],i,u,n,flag=0;
 printf("enter elements:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 printf("enter element ofr updating::...");
 scanf("%d",&u);
 printf("enter the new element:");
 scanf("%d",&n);
 for(i=0;i<size;i++)
 {
 if(a[i]==u)
 {
  a[i]=n;
  flag=1;
 }
 }
 if(flag)
 {
  printf("element afterr updating:");
  for(i=0;i<size;i++)
  {
  printf("%d",a[i]);
  }
 }
 else
  {
  printf("not element");
  for(i=0;i<size;i++)
  {
  printf("%d",a[i]);

 }
 }
}
