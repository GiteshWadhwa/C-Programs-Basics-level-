#include<stdio.h>
main()
{
  FILE *fp;
  char s[10];
  fp=fopen("f2.txt","r");
  if(fp==NULL)
  {
   printf("file can not found");
   exit(1);
  }
  while(fgets(s,9,fp)!=NULL)
  {
   printf("%s",s);
  }
  fclose(fp);

}
