#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int l;
    char s[20];
    printf("enter your name:");
    gets(s);
    l=strlen(s);
    printf("length of string %s is %d",s,l);
    getch();

}
