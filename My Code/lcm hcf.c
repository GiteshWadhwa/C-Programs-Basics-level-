#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,lcm;
    printf("enter two numbers:");
    scanf("\n%d\n%d",&num1,&num2);
    while(num1!=num2)
    {


    if(num1>num2)
    {
        num1=num1-num2;
    }
    else
        {
            num2=num2-num1;
        }
    }printf("\n\n\tHCF OF TWO NUMBERS IS %d",num1);
    lcm=(num1*num2)/num1;
    printf("\n\n\n\tLCM OF TWO NUMBERS IS %d",lcm);
    getch();
    return 0;

}
