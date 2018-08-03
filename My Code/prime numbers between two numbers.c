#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,x,i;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    for(x=num1+1;x<=num2-1;x++)
        {for(i=2;i<x;i++)
            if(x%i==0)
            break;
        if(i==x)

    printf("prime numbers are %d\n",x);
}
}
