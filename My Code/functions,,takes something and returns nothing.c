/*Takes something and returns nothing*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    void add(int,int);
    void sub(int,int);
    void mul(int,int);
    void quotient(int,int);
    void rem(int,int);
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    add(num1,num2);
    //sub(num1,num2);
    //mul(num1,num2);
    //quotient(num1,num2);
    //rem(num1,num2);
    getch();

}
void add(x,y)
{
    int add;
    add=x+y;
    printf("Addition is  = %d",add);

}
void sub(x,y)
{
    int sub;
    sub=x-y;
    printf("\nSubtraction is = %d",sub);
}
void mul(x,y)
{
    int mul;
    mul=x*y;
    printf("\nProduct is = %d",mul);
}
void quotient(x,y)
{
    float div;
    div=x/y;
    printf("\nQuotient is = %.3f",div);
}
void rem(x,y)
{
    int rem;
    rem=x%y;
    printf("\nRemainder is %d ",rem);
}
