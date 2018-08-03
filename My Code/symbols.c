#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if((ch>=1&&ch<=64 )||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
    {
        printf("entered character is a symbol\n%c\tASCII value = %d",ch,ch);
    }
}
