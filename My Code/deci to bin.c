#include<stdio.h>
main()
{
 int num,x;
 int binary(int);
 printf("enter a decimal number:");
 scanf("%d",&num);
 x=binary(num);
 printf("decimal %d  binary %d",num,x);
}
binary(int x)
{
 int rem,b=0,i=1;
 while(x){
 rem=x%2;
 x=x/2;
 b=b+rem*i;
 i=i*10;}
 return(b);

}
