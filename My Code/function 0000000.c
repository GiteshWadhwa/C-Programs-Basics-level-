#include<stdio.h>
main()
{
int x,y,s;
printf("enter two numbers:");
scanf("%d%d",&x,&y);
 s=add();
 printf("%d",s);
 sub();
 mul();
 quo();
 rem();
}
add(int num1,num2)
{
    int sum;
 sum=num1+num2;
}return(sum);
