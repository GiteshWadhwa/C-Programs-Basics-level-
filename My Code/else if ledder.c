#include<stdio.h>
main()
{
    int ch;
    printf(">>choices:");
    printf("\n\t(1) for add!");
    printf("\n\t(2) for edit!");
    printf("\n\t(3) for delete!");
    printf("\n\t(4) for exit!");
    printf("\n\nenter your choice:");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("add option is selected:");
    }
    else if(ch==2)
    {
        printf("edit option is selected:");
    }
    else if(ch==3)
    {
        printf("delete option is selected:");
    }
    else if(ch==4)
    {
        printf("exit option is selected:");
    }
    else
    {
        printf("invalid input!!");
    }
    getch();
    return 0;
}
