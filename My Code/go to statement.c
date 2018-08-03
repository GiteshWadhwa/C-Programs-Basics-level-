#include<stdio.h>
#include<conio.h>
main()
{
    int no;
    char ans;

    start:
    printf("enter year:");
    scanf("%d",&no);

    if(no%4==0)
    {
        printf("leap year:");
                goto start2;

    }
    else
        {
            printf("not a leap year:");
                    goto start;

        }
        start2:
            printf("\nend of task");

        getch();
        return 0;

}
