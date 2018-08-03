#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 int series(int);
 printf("enter a number:");
 scanf("%d",&num);
 series(num);
 getch();
}
series(int x)
{
    if(x>=1){
    series(x-1);
    printf("%d ",x);}

}
