#include<stdio.h>
#include<conio.h>
main()
{
    int num,n,i,j,sp;
    printf("enter number of rows;");
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
     printf("\n");
   }

    getch();
    return 0;
}
