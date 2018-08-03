#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    int swap(int*,int*);
    printf("enter two numbers for interchanging:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("swap:\na=%d\nb=%d",a,b);
    getch();
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
