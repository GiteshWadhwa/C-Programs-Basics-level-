#include<stdio.h>
#include<conio.h>
main()
{
    int num,ans;
    int sum(int);
    printf("enter a number:");
    scanf("%d",&num);
   ans=sum(num);
   printf("sum of n natural number is %d",ans);
    getch();
}
int sum(int a)
{
    int x;
    if(a==0)
    {
        return(a);
    }
    else
    {
    x=a+sum(a-1);
    return x ;
    }
}
