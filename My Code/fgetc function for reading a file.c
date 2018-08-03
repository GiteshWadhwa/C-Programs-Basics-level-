#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp;
 char c;
 fp=fopen("f1.txt","r");
 if(fp==NULL)
 {
  printf("file can not found");
  exit(1);
 }
 c=fgetc(fp);
 while(!feof(fp))
 {
     printf("%c",c);
  c=getc(fp);
 }
 fclose(fp);

}
