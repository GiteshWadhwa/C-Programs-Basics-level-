#include<stdio.h>
#include<conio.h>
main()
{
    char s[3][10];
    int i;
    printf("enter three strings :");
    for(i=0;i<=2;i++)
    gets(s[i]);
    for(i=0;i<=2;i++)
        printf("\t%s\n\n",s[i]);
    getch();
}
