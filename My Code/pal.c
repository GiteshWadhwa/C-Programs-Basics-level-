#include<stdio.h>
int main()
{
    char str[101],rev[101];
    scanf("%s",str);
    int size,i,j;
    size=strlen(str);
    j=size;
    for (i=0;i<size;i++)
    {
        rev[j-1]=str[i];
        j--;
    }
    for (i=0;i<size;i++)
    {
        if (rev[i]==str[i])
        {
            j++;
        }
    }
    if (j==size)
    {
        printf ("Palindrome");
    }
    else
    {
        printf ("Not Palindrome");
    }
}
