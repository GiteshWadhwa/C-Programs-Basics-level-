#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    switch(ch)
    {
         case'a':
         case'e':
         case'i':
         case'o':
         case'u':

            printf("entered character is vowel =%c",ch);
            break;
         default:
            printf("entered character is not vowel =%c",ch);
            break;


    }
}
