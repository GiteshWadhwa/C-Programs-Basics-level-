#include<stdio.h>
#include<conio.h>
main()
{
    char s[20];
    printf("enter your name:");
    scanf("%s",s);//s=1000 =&s[0]....we can write s or &s...both have a same memry address
    puts(s);
}
