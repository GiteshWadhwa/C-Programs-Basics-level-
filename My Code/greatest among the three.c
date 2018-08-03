#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,num3,k;
    printf("enter number:");
    scanf("\n%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    k=num1;
    if(num2>num1&&num2>num3)
        k=num2;
    if(num3>num1&&num3>num2)
        k=num3;

    printf("\n%d is greater",k);




}
