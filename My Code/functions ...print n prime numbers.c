#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    int prime(int);
    printf("enter a number:");
    scanf("%d",&num);
    prime(num);
    getch();
}
prime(int x)
{
    int i;
    for(i=1;i<=x;i++)

        for(i=2;i<=x-i;i++)

             if(x%i==0)
                break;
            if(x==i)
                {
                  printf("entered number is prime %d",x);
                }
                else
                       {
                        printf("entered number is not prime%d",x);
                       }

 }
