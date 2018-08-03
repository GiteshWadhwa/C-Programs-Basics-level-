#include<stdio.h>
main()
{
 FILE *fp;
 char s[10];
 int i;
 fp=fopen("new file.txt","w");
 if(fp==NULL)
 {
  printf("file not found!");
  exit(1);
 }
 printf("enter the text:");
 gets(s);
 for(i=0;i<strlen(s);i++)
 fputc(s[i],fp);
 getch();
 fclose(fp);
 getch();
}
