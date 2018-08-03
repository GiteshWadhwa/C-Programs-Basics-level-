#include<stdio.h>
 main()
 {
  int n,i;
  char arr[220];
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the elements in array:");
  for(i=0;i<n;i++)
{
    scanf("%c ",&arr[i]);
  }
  for(i=n;i>=0;i--)
 {
    printf("%c ",arr[i]);
 }

 }
/*
#include<stdio.h>
int main()
{
    char a[20];
    int i;
    printf("enter elements:");
    gets(a);
    strrev(a);
  printf("%s",a);
}
*/
