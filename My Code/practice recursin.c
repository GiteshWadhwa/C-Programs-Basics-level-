#include<stdio.h>
main()
{
 int num,s;
 int sum(int);
 printf("enter a number:");
 scanf("%d",&num);
 s=sum(num);
 printf("sum = %d",s);
}
sum(int x)
{
 int s=0;
 if(x!=0){
 s=x+sum(x-1);}
 return(s);
}
