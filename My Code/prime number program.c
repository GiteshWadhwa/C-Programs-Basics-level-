#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,x;
    printf("enter a number:");
    scanf("%d",&num);
    x=num;
    for(i=2;i<=x-1;i++)
         if(num%i==0)
         break;
         if(num==i)
         {
            printf("entered number is a prime number %d:",num);
         }
            else
            {
                printf("entered number is not a prime number:!!%d",num);
            }
            getch();
            return 0;


    }


