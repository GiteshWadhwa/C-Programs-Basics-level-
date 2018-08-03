#include<stdio.h>
#include<conio.h>
main()
{
    char str[20];
    printf("enter a string:");
    gets(str);
    if( palindrome(str))
        printf("palindrome:!!");
    else
        printf("Not a palindrome!!");
}
    int palindrome(char s[])
    {
        int l,i;
        l=strlen(s);
        for(i=0;i<l/2;i++)
        {
            if(s[i]!=s[l-1-i])
                return(0);
        }
        return(1);
    }





