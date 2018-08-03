#include<stdio.h>
main()
{
  FILE *fp;
  char str[20];
  fp=fopen("f1.txt","w");
  printf("enter a string:");
  gets(str);
  fputs(str,fp);
  fclose(fp);
}
