#include<stdio.h>
main()
{
 int num,i,f;
 int fibbona(int);
 printf("enter a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 printf(" %d",fibbona(i));
}
fibbona(int x)
{
 if(x==1||x==2)
 return(1);
 return(fibbona(x-1)+fibbona(x-2)) ;

}
