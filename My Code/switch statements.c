#include<stdio.h>
main()
{
 char ch;
 printf("enter alphabet:");
 scanf("%c",&ch);
 switch(ch)
 {
   case'a':
   case'e':
   case'i':
   case'o':
   case'u':
   printf("enter alphabet is a vowel:%c",ch);
   break;
   default:
   printf("enterd alphabet is not a vowel: %c",ch);
 }
}
