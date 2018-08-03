#include<stdio.h>
int main()
{
 int a[20],size,i,j,temp;
 printf("enter array size:");
 scanf("%d",&size);
 printf("enter elements in array:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);

for(i=1;i<size;i++)
{
 temp=a[i];
 j=i-1;
 while(j>=0&&a[j]>temp)
 {
  a[j+1]=a[j];
  j--;
 }
 a[j+1]=temp;
}
printf("after insertion sort: \n");
for(i=0;i<size;i++)
{
    printf("%d\n",a[i]);
}
}
