#include<stdio.h>
#include<conio.h>
main()
{
    int num,n,sp,j,i;
    printf("enter row numbwe:");
    scanf("%d",&num);
    n=num;
    for(i=1;i<=num;i++)
    {
        for(sp=1;sp<=n;sp++)
        {
            printf(" ");
        }n--;
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
