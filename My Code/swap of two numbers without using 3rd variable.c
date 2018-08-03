#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("\n%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n%d\n%d",num1,num2);
    getch();
    return 0;
}
