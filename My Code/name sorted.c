#include<stdio.h>
#include<string.h>
int main()
{
 int size,max_S,i,round,x;
 printf("enter size:");
 scanf("%d",&size);
 printf("enter the max size:");
 scanf("%d",&max_S);
 char a[size][max_S],s[max_S];
 printf("enter strings:");
 for(i=0;i<size;i++)
 gets(a[i]);
 for(round=1;round<size-1;round++)
 {
  for(i=0;i<size-round;i++)
  {
    x=strcmp(a[i],a[i+1]);

  if(x>0)
  {
   strcpy(s,a[i]);
   strcpy(a[i],a[i+1]);
   strcpy(a[i+1],s);
  }
 }
 }
 printf("after sorting:");
 for(i=0;i<size;i++)
 puts(a[i]);

}
