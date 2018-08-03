#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,j;
    char ch='A';
    printf("enter number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }
    getch();
    return 0;
}
