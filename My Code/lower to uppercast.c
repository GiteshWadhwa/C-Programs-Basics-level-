#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    char s[25];
    printf("enter string:");
    gets(s);
    for(i=0;s[i];i++){
    if(s[i]>='a'&&s[i]<='z')
        s[i]=s[i] - 32;


        }
        printf("%s",s);

}
