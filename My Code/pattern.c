#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,num;
    char ch='A';
    printf("enter numbers");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }

    getch();
    return 0;

}
