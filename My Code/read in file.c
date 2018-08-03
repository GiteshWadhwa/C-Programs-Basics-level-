#include<stdio.h>
main()
{
 FILE *fp;
 char ch;
 fp=fopen("f1.txt","r");
 if(fp==NULL)
 {
  printf("file can not extst");
  exit(1);
 }
 ch=fgetc(fp);
 while(!feof)
 {
  printf("%c",ch);
  ch=fgetc(fp);
   }
   fclose(fp);

}
