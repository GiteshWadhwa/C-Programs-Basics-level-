#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    int series(int);
         printf("enter a number:");
    scanf("%d",&num);
    series(num);
    getch();
}
series(int y)
{
    if(y>=1)
    {

        printf(" %d",y);
        series(y-1);
    }


}
