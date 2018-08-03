#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,j;
    printf("enter row number:");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
         printf("\n");
    }
    getch();
    return 0;
}
