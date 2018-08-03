#include<stdio.h>
main()
{
 FILE *fp;
 char s[10];
 fp=fopen("f1.txt","w");
 printf("enter a string:");
 gets(s);
 fputs(s,fp);
 fclose(fp);
}
