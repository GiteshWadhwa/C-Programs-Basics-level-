#include<stdio.h>
main()
{
    int num;

    printf("enter number:");
    scanf("%d",&num);
     goto start;
    if(num%4!=0)
    {
        printf("leap year!");
    }
    start:;

            printf("not a leap year!");


}
