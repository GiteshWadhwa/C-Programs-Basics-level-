#include<stdio.h>
#include<conio.h>
main()
{
    int s;
    int add(int,int);
    int num1,num2;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    s=add(num1,num2);
    printf("sum = %d",s);
    getch();
}
add(int x,int y)
{
   int add;
   add=x+y;
   return(add);
}
