#include<stdio.h>
main()
{
int n,i,arr[20],rem,rev=0;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements in array:");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
for(i=n-1;i>=0;i--)
{
    printf("%d",arr[i]);
}


}


