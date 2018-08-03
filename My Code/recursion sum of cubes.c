#include<stdio.h>
#include<conio.h>
main()
{
    int num,ans;
    int cube(int);
    printf("enter a number:");
    scanf("%d",&num);
    ans=cube(num);
    printf("cube of %d is %d",num,ans);
    getch();
}
cube(int x)
{
   if(x/10==0)
        return x*x*x;
   return (x%10)* (x%10)* (x%10) + cube(x/10);
}
