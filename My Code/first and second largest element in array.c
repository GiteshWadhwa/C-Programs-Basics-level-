#include<stdio.h>
int main()
{
 int size,i,max1,max2,temp;
 printf("enter size:");
 scanf("%d",&size);
 int a[size];
 printf("enter elements:");
   for(i=0;i<size;i++)
   scanf("%d",&a[i]);
   max1=a[0];
   //max2=a[1];
   /*if(max1<max2)
   {
    temp=max1;
    max1=max2;
    max2=temp;
   }*/
   for(i=1;i<size;i++)
   {
    if(max1<a[i])
    {
     //max2=max1;
     max1=a[i];
    }
   }
   max2=-12345678;
   for(i=1;i<size;i++)
   {
    if(max2<a[i] && a[i]!=max1)
    {
     //max2=max1;
     max2=a[i];
    }
   }

   printf("\n%d is the first largest",max1);
   printf("\n%d is the second largest",max2);
}
