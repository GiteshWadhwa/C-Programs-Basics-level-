#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char s[20],r;
    printf("enter your name:");
    gets(s);
    puts(s);
    strrev(s);
    printf("%s",s);
    getch();
}
