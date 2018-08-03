#include<stdio.h>
int main()
{
    float a,b,sum,diff,prod,quotient,rem;
    printf("Enter Two Numbers\n");
    scanf("%f%f",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quotient=a/b;
    rem=a%b;
    printf("Sum=%f\ndiff=%f\nprod=%f\nquotient=%f\nrem=%f",sum,diff,prod,quotient,rem);
    return 0;

}
