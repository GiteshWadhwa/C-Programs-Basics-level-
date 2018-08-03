#include<stdio.h>
#include<math.h>
main()
{
int n,p=0,i=0;
 printf("enter value:");
 scanf("%d",&n);

 while(p<n){
     p=pow(2,i);
     i++;
 }
 if(n==p)
 printf("entered number is power of two!!");
 else printf("not power of two");
}
{
 int i,num=2,p,x=1;
 scanf("%d",&p);
 for(i=1;i<=p;i++)
  x=x*num;
 printf("%d",x);
}
