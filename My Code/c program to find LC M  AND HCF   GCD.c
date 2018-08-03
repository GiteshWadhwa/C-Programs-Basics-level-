#include<stdio.h>
#include<conio.h>
 main()
{
    int num1,num2,x,y,gcd,lcm;
    printf("enter two integers:\n");
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
    printf("GCD = %d",num1);

lcm=(x*y)/num1;
printf("\nLCM = %d",lcm);


    getch();
    return 0;
}

