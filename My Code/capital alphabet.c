#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    int num;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("entered number is Capital alphabet %c\tASCII value = %d",ch,ch);
    else if(ch>=97&&ch<=122)
        printf("entered number is small alphabet %c\tASCII value = %d",ch,ch);
}
