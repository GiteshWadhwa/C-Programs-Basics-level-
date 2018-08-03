#include<stdio.h>
main()
{
    int num,x,i;
    printf("enter number:");
    scanf("%d",&num);
    x=num;
    for(i=2;i<=x-1;i++)
    if(num%i==0)
    break;
    if(num==i)
    {
        printf("%d is a prime number:!",num);
    }
    else
        {
        printf("%d is not a prime number!!",num);
    }
    getch();
    return 0;
}
