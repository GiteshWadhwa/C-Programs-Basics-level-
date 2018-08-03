/*01Takes nothing returns nothing*/
#include<stdio.h>
#include<conio.h>
void main()
{
    /*for calculating any function remove comment symbol from call function variable*/
    void add(void);
    void sub(void);
    void mul(void);
    void quotient(void);
    void rem(void);
    add();
   // sub();
    //mul();
    //quotient();
    //rem();
    getch();
}
void add()
{
    int num1,num2,add;
    printf("For Addition:");
    printf("\n\n\tenter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    printf("\n\n\tSum is %d",add);
}
void sub()
{
    int num1,num2,sub;
    printf("\n\nFor subtraction:");
    printf("\n\n\tenter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    sub=num1-num2;
    printf("\n\n\tDifference = %d",sub);
}
void mul()
{
    int num1,num2,mul;
    printf("\nFor Multiplication:");
    printf("\n\n\tenter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    mul=num1*num2;
    printf("\n\n\tProduct is = %d",mul);
}
 void quotient()
 {
     float num1,num2,div;
     printf("\nFor Quotient:");
     printf("\n\n\tenter two numbers:\n");
     scanf("%f%f",&num1,&num2);
     div=num1/num2;
     printf("\n\n\tQuotient is = %.3f",div);
 }
void rem()
{
    int num1,num2,mod;
    printf("\nFor modulous:");
    printf("\n\n\tenter two values:\n");
    scanf("%d%d",&num1,&num2);
    mod=num1%num2;
    printf("\n\n\tModulous is = %d",mod);
}
