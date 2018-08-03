#include<stdio.h>
#include<conio.h>
main()
{
char s[25];
int i;
 FILE *fp;
 fp=fopen("written.txt","w");
 if(fp==NULL)
 {
  printf("file can not found:");
  exit(1);
 }
 printf("enter the text:");
 gets(s);
 for(i=0;i<strlen(s);i++)
 fputc(s[i],fp);
 fclose(fp);
 getch();
}
