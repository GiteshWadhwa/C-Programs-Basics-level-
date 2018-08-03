#include<windows.h>
#include<stdio.h>
void main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d/%d/%d",stime.wDay,stime.wMonth,stime.wYear);
    int num,ans;
    int fibbona(int);
    printf("\nenter a number:");
    scanf("%d",&num);
    ans=fibbona(num);
    printf("%d is the %d term",ans,num);
    getch();
}
fibbona(int x)
{
    if(x==1||x==2)
        return 1;
    return(fibbona(x-1)+fibbona(x-2));
}
