#include<stdio.h>
int main()
{
 int a[10],i,loc,min,j,temp;
 printf("enter elements in array:");
 for(i=0;i<=9;i++)
 scanf("%d",&a[i]);

for(i=0;i<=9;i++)
{
 min=a[i];
 loc=i;
 for(j=i+1;j<9;j++)
 {
  if(min>a[j])
  {
  min=a[j];
  loc=j;
 }
 }
   temp=a[i];
   a[i]=a[loc];
   a[loc]=temp;


}
printf("elements after selection sort:\n");
for(i=0;i<=9;i++)
printf("%d\n",a[i]);
}
