#include<stdio.h>
main()
{
 int num,f;
 int fibbona(int);
 printf("entera number:");
 scanf("%d",&num);
 f=fibbona(num);
 printf("%d",f);
}
fibbona(int x)
{
 if(x==1||x==2)
 return(1);
 return(fibbona(x-1)+fibbona(x-2));
}
