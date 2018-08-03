#include<stdio.h>
int main()
{
  FILE *fp;
  char s[100];
  int i;
  fp=fopen("f2.txt","w");
  if(fp==NULL)
  {
  printf("file can not open");
  exit(1);
  }
  printf("enter a string:");
  gets(s);
  for(i=0;i<strlen(s);i++)
  fputc(s[i],fp);
  getch();
  fclose(fp);
  getch();




}
