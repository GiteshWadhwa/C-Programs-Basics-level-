#include<stdio.h>
#include<conio.h>
main()
{
    char s[3][20];
    int i;
    printf("enter 3 name:");
    for(i=0;i<=2;i++)
        gets(s[i]);
    for(i=0;i<=2;i++)
    printf("%s\n",s[i]);
    getch();
}
