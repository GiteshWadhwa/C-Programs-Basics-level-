#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,j,sp,n;
    char ch='a';
    printf("enter numbers:");
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
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
