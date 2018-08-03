#include<stdio.h>
#include<conio.h>
main()
{
    float num1,num2,p;
    printf("enter the value with its power:");
    scanf("%f%f",&num1,&num2);
    p=pow(num1,num2);
    printf("%.1f",p);
}
