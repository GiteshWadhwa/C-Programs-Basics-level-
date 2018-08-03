#include<stdio.h>
#include<conio.h>
main()
{
    int num,s;
    int sumOdd(int);
    printf("enter two numbers:");
    scanf("%d",&num);
    s=sumOdd(num);
    printf("%d is the sum of first n odd natural numbers:",s);
    getch();
}
sumOdd(int x)
{
    int i,sumOdd=0;
    for(i=1;i<=x;i++)
    {
      sumOdd=sumOdd+(2*i)-1;
    }
    return(sumOdd);
}
