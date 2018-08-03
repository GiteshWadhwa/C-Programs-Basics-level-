#include<windows.h>
#include<stdio.h>
#include<conio.h>
main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d/%d/%d",stime.wDay,stime.wMonth,stime.wYear);
    int num,f;
    int fibb(int);
    printf("\nenter a number:");
    scanf("%d",&num);
   fibb(num);
    getch();
}
fibb(int x)
{
    int a=-1,b=1,c;
    if(x==1)
    {
        return 1;
    }
    else
        {
                c=a+b;
                   printf("\n%d",c);

               a=b;
               b=c;
        }
}
