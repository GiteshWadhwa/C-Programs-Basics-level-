/*functions..series printed withthe help of takes something and returns nothing*/
#include<stdio.h>
#include<conio.h>
main()
{
    int num,f;
    int fibbona(int);
    printf("enter a number for fibbonac series:");
    scanf("%d",&num);
    fibbona(num);
    getch();

}
fibbona(int x)
{
     int a=-1,b=1,c,i;
    for(i=1;i<=x;i++)
    {
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
    }
}
