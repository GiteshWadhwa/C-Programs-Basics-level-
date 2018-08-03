#include<stdio.h>
main()
{
    int num,i,prod=1;
    printf("enter number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        prod=(prod*i);
    }
    printf("%d is the product of first n digits",prod);
    getch();
    return 0;
}
