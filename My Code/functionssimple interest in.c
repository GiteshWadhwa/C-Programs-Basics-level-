#include<stdio.h>
#include<conio.h>
void main()
{
    int i,c;
    int si(int,int,int);
    int ci(int,int,int);
    int pr,r,t;
    printf("enter the value of principle ,rate,timeperiod:");
    scanf("%d%d%d",&pr,&r,&t);
   i=si(pr,r,t);
   printf("Simple interest is %d",i);
   c=ci(pr,r,t);
   printf("\ncompound interest is %d",c);
    getch();

}
si(int x,int y,int z)
{
    int si;
    si=x*y*z/100;
    return(si);
}
ci(int x,int y,int z)
{
    int ci;
    ci=x*(pow((1+y/100),z)-1);
    return(ci);
}
