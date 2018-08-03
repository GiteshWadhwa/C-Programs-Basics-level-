#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    goto start;
    if(num%2==0)
    {
        printf("even number:");
    }
    start:;
    printf("even");
    getch();
    return 0;
}
