#include<stdio.h>
 main()
 {
  int n,i,arr[20],rem,rev=0,j;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the elements in array:");
  for(i=0;i<n;i++)
{
    scanf("%d ",&arr[i]);

}
for(i=n-1;i>=0;i--)
{
    printf("%d ",arr[i]);
}


 for(i=0;i<n;i++)
 {
    printf("\n%c ",arr[i]);
 }
 for(j=n-1;j>=0;j--)
{
    printf("\n%c ",arr[j]);
}
if(arr[j]==arr[i])
{
    printf("Not a Palindrome!!");
}
else
{
    printf(" palindrome!! ");
}
}
