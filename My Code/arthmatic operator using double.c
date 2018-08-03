#include<stdio.h>
int main()
{
    double a,b,sum,diff,prod,quotient,rem;
    printf("Enter Two Numbers\n");
    scanf("%lf%lf",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quotient=a/b;
    rem=(a%b);
    printf("Sum=%lf\ndiff=%lf\nprod=%lf\nquotient=%lf\nrem=%lf",sum,diff,prod,quotient,rem);
    return 0;

}
