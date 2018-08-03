#include<stdio.h>
int main()
{
 int a[10],i,pos,n;
  for(i=0;i<10;i++)
  {
    printf("\nenter  number %d :",i+1);
    scanf("%d",&a[i]);
  }
  printf("\nenter the position:");
  scanf("%d",&pos);
  if(pos<1 ||pos>10)
  {
      printf("invalid!");
  }
  for(i=9;i>=pos;i--)
  {
      a[i]=a[i-1];
  }
  printf("enter the new element:");
  scanf("%d",&a[pos-1]);
  printf("\nafter inserting an element in array::\n");
  for(i=0;i<10;i++)
  {
      printf("\t\t%d\n",a[i]);
  }

}
