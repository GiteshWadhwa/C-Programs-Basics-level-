#include<stdio.h>
main()
{
 int num;
 int series(int);
 printf("enter a number:");
 scanf("%d",&num);
 series(num);
}
series(int x)
{
int s;
if(x>=1){
 series(x-1);}
 printf(" %d",x);

}
