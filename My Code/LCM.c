#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,gcd,lcm,x,y;
    printf("enter numbers:\n");
    scanf("%d%d",&num1,&num2);
    x=num1;
    y=num2;
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
     }
            printf("gcd of two numbers is %d",num1);
            lcm=(x*y)/num1;
            printf("\nlcm of two numbers is %d",lcm);
            getch();
            return 0;
}
