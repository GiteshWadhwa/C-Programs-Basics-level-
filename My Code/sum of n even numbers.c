#include<stdio.h>
#include<conio.h>
main()
{
    int num,s;
    int sumEven(int);
    printf("enter number:");
    scanf("%d",&num);
    s=sumEven(num);
    printf("%d is the sum of first n even numbers:!!",s);
    getch();
}
sumEven(int x)
{
    int i,sumEven=0;
    for(i=0;i<=x;i++)
    {
        sumEven=sumEven+(i*2);

    }
    return(sumEven);
}
