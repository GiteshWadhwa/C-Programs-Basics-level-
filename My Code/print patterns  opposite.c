#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,j,sp,n;
    printf("enter row number:");
    scanf("%d",&num);
    n=num;
    for(i=num;i>=1;i--)
    {
        for(sp=num;sp<=n;sp++)
        {
            printf(" ");
        }
        n++;
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
