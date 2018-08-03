#include<stdio.h>
#include<conio.h>
main()
{
    int s;
    int add(int,int);
    int num1,num2;
    printf("\n\n\tenter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    s=add(num1,num2);//actual arguments..
    printf("\n\n\tAddition is %d\n",s);
    getch();
}
add(int a,int b)//formal arguments..
{
    int add;
    add=a+b;
    return (add);
}
