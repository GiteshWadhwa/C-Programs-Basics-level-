#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    int reverse(int);
    printf("enter a number:");
    scanf("%d",&num);
    reverse(num);
    getch();
}

reverse(int x)
{
    if(x<1)
        return 1;
    else
    printf("%d ",x);
    reverse(x-1);
}
