#include<stdio.h>
int main()
{
  FILE *fp;
  char s[500];
  int i;
  fp=fopen("f3.txt","w");
  if(fp==NULL)
  {
  printf("file can not open");
  exit(1);
  }
  printf("enter a string:");
  gets(s);
  for(i=0;i<strlen(s);i++)
  fputc(s[i],fp);
  fclose(fp);
  getch();

  }
