#include<stdio.h>
#include<conio.h>
main()
{
    int swap(int* , int*);
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    swap(&a , &b);
    printf("swap:\na=%d\nb=%d",a,b);
    getch();
}
int swap(int *x , int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
}

