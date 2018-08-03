#include<stdio.h>
#include<conio.h>
main()
{
  char str[20];
  int l,i;
  printf("enter string:");
  gets(str);
  l=strlen(str);
  for(i=0;i<l/2;i++)
  {
      if(str[i]!=str[l-1-i])
      {
          printf("\nnot a palindrome:!!");
          break;
      }
  }
  if(i==l/2)
    printf("\npalindrome!!");
}
