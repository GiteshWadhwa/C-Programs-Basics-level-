#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    start:
    printf("\nenter number:");
    scanf("%d",&num);

        if(num%2==0)
        {
            printf("even number!");
        }
        else
            {
                printf("odd number!");
        goto start;
            }
}
