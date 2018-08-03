#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    int swap(int* , int*);
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
     printf("\nSwap:\n\na=%d\nb=%d",a,b);
    getch();

}
int swap(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
