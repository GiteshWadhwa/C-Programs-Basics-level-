#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,temp;
    printf("Enter Your Numbers:\n");
    scanf("%d%d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("swap of two numbers:\n%d\n%d ",num1,num2);
    getch();
    return 0;
}
