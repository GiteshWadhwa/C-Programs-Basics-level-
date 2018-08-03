#include<stdio.h>
#include<conio.h>
main()
{
    int cp,sp;
    printf("enter costprice:");
    scanf("%d",&cp);
    printf("enter selling price:");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("profit");
    }
    else{
    printf("loss!");
    }
    getch();
    return 0;
}
