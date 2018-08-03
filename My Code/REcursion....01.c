

#include<stdio.h>
#include<conio.h>
main()
{
    int num,p;
    int fact(int);
    printf("enter a number:");
    scanf("%d",&num);
    p=fact(num);
    printf("%d",p);
    getch();
}
 int fact(int x)
{
    int f;
    if(x==0)
    {
        return 1;
    }
    else
        {
            f=x*fact(x-1);
    return f;
        }
}
