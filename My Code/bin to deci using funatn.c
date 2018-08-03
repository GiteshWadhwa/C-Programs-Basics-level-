#include<stdio.h>
main()
{
 int num,d;
 int decimal(int);
 printf("enter a number:");;
 scanf("%d",&num);
 d=decimal(num);
 printf("binary %d  decimal %d",num,d);
}
decimal(x)
{
 int rem,sum=0,i=0;
 while(x){
 rem=x%10;
 x=x/10;
 sum=sum+pow(2,i)*rem;
 i=i++;}
 return(sum);
}
