#include<stdio.h>
#include<conio.h>
main()
{
    int no;
    char ans;
    start:
    printf("enter a number:");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("even:");
    }
    else
        {
            printf("odd:");
        }
    printf("do u want to exit?");
    scanf("%c",&ans);
    if(ans=='n'||ans=='N')
    {
        goto start;
    }
    getch();
    return 0;

}
