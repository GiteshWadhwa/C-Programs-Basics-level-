#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp;
 char s[20];
 fp=fopen("f1.txt","a");
 printf("entyer a string:");
 gets(s);
 fputs(s,fp);
 fclose(fp);
}
