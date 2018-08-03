/*returns something and takes nothing*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int s,d,m,r;
    int add(void);
      int sub(void);
      int mul(void);
      int quotient(void);

  s=add();
  printf("Sum is %d\n",s);
  d=sub();
  printf("\nDifference is %d",d);
  m=mul();
  printf("\nProduct is %d",m);
  r=quotient();
  printf("\nQuotient is %d",r);
  getch();
}
add()
{
    int num1,num2,add;
    printf("\nenter two numbers:");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    return(add);
}
sub()
{
    int num1,num2,sub;
    printf("\nenter two numbers:");
    scanf("%d%d",&num1,&num2);
    sub=num1-num2;
    return(sub);
}
mul()
{
    int num1,num2,mul;
    printf("\nenter two numbers:");
    scanf("%d%d",&num1,&num2);
    mul=num1*num2;
    return(mul);
}
 quotient()
{
    int num1,num2,quotient;
    printf("\nenter two numbers:");
    scanf("%d%d",&num1,&num2);
    quotient=num1/num2;
    return(quotient);
}
