#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    int swap(int* , int*);
    printf("\n\n\tenter two numbers for swapping:\n\n\t");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\n\n\tSwap = \n\t%d\n\t%d",a,b);
    getch();
}
swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x  - *y;
    *x=*x - *y;
}
