#include<stdio.h>
#include<conio.h>
main()
{
    char s[25];
    int i;
    printf("enetr a string:");
    gets(s);
    for(i=0;s[i];i++)
    {
      if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
            else if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
     }
    printf("%s",s);


}

