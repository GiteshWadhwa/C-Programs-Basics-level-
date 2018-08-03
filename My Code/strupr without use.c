#include<stdio.h>
#include<conio.h>
main()
{
    char s[20];
    int i;
    printf("enter a string:");
    gets(s);

    for(i=0;s[i];i++){
    if( s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
    }
    printf("%s",s);
}
