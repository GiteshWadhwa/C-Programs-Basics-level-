#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%d",k);
            }
            else
                {
                    printf(" ");
                }
        }
        printf("\n");
    }
}