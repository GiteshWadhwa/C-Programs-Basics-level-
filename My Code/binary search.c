#include<stdio.h>
int main()
{
 int a[10],i,mid,num,l,u;
 printf("enter elements in array:");
  for(i=0;i<=9;i++)
  scanf("%d",&a[i]);
  printf("enter the term u want to search:");
  scanf("%d",&num);
  l=0;
  u=9;
  while(l<=u)
  {
        mid=(l+u)/2;

   if(num==a[mid])
   {
    printf("item founded at index %d",mid);
    return ;
   }
   else if(num>a[mid])
   {
    l=mid+1;
   }
   else
   {
    u=mid-1;
   }
  }
printf("search unsuccessfull!!\nentered element is not in the list:!");
}
