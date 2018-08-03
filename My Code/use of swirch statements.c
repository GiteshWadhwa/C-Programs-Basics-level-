#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<float.h>
#include<stddef.h>
main()
{
char ch;
printf("enter the character:\n");
scanf("%c",&ch);
switch (ch)
{
case  'a':
case  'e':
case  'i':
case  'o':
case  'u':
    printf("character is vowel %c",ch);
    break;
default:

        printf("nnnnnot a vowel %c",ch);
    break;
}
getch();
return 0;

}
