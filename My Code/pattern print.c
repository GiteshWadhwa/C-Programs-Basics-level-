#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,j,sp,n;
    printf("enter number:");
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
              printf("%d ",j);
          }
           printf("\n");
    }

    getch();
    return 0;
}
