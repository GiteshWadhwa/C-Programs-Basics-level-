#include<stdio.h>
#include<conio.h>
main()
{
    char s[20];
    int i;
    printf("enterr a string:");
    gets(s);
    for(i=0;s[i];i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;

    }
 printf("%s",s);

}
