#include<stdio.h>
#include<conio.h>
main()
{
    int num,n,i,j,sp;
    printf("enter rows number:");
    scanf("%d",&num);
    n=num;
    for(i=1;i<=num;i++)
    {
        for(sp=1;sp<=n;sp++)
        {
            printf(" ");
        }
        n--;
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");/*
        for(i=1;i<=num;i++)
        {
            for(sp=1;sp<=n;sp++)
            {
                printf(" ");
            }
            n++;
            for(j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
        }*/
    }
    getch();
    return 0;
}
