#include<stdio.h>
#include<conio.h>
main()

{
    int num,m;
    int factorial(int);
    printf("enter a number:\n");
    scanf("%d",&num);
    factorial(num);
    getch();
}
factorial(int f)
{
    int x,c=1;
    x=f;
    while(x)
    {
    c=c*x;
    x=x--;
    }
    printf("%d",c);
}
