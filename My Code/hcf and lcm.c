#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,lcm,x,y;
    printf("enter the two numbers:");
    scanf("%d%d",&x,&y);
    while(x!=y)
    {
    if(x>y)
    {
        x=x-y;
    }
    else
    {
        y=y-x;
    }
    }
    printf("GCD = %d",x);
    /*lcm=num1*num2/num1;
    printf("\nLCM  = %d",lcm);*/

}
