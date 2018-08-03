#include<stdio.h>
int main()
{
int size;
printf("enter the size:");
scanf("%d",&size);
int arr[size],sum=0,i;
float average;
printf("enter the elements:");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
for(i=0;i<size;i++)

sum=sum+arr[i];
printf("Sum of Arrays:%d",sum);
average=sum/size;
printf("\nAverage is %.2f",average);
}
