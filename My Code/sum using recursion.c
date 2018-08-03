#include<stdio.h>
main()
{
 int num,s;
 int sum(int);
 printf("enter a number:");
 scanf("%d",&num);
 s=sum(num);
 printf("%d",s);
}
sum(int x)
{
    int su=0;
 if(x!=0)
 su = x+sum(x-1);
 return(su);
}
