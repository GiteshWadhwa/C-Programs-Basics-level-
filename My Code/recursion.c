#include<stdio.h>
#include<conio.h>
main()
{
    int num,y;
    int even(int);
    printf("enter a number:");
    scanf("%d",&num);
    y=even(num);
    printf("%d",2*y);
    getch();
}
even(int x)
{
    int sum;
    if(x==0)
    {
        return 0;
    }
    else
    {
        sum=x+even(x-1);
        return sum;
    }
}
