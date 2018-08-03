#include<stdio.h>
#include<conio.h>
main()
{
    int num,sum=0,i;
    printf("enter number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      sum=sum+i;

    }
     printf("%d is sum of first n digits\n",sum);
    getch();
    return 0;
}
