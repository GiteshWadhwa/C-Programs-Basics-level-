#include<stdio.h>
#include<conio.h>
main()
{
    int num,ans;
    int fibb(int);
    printf("enter a number:");
    scanf("%d",&num);
    ans=fibb(num);
    printf("%d term is %d ",num,ans);
    getch();
}
fibb(int x)
{
    if(x==1||x==2)

         return(1);
        return(fibb(x-1)+fibb(x-2));

    }
