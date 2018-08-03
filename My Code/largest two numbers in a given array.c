#include<stdio.h>
int main()
{
 int size;
 printf("enter size:");
 scanf("%d",&size);
 int a[size],i,max=0,max2=0;
 printf("enter elements:");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<size;i++)
 {
 max=a[0];
 if(max<a[i]){
    max=a[i];}
}
 printf("largest element in array is %d",max);

for(i=0;i<size;i++)
 {
 max2=a[1];
 if(max2<a[i]){
    max2=a[i];}
}
 printf("\nSecond largest element in array is %d",max2);
}
