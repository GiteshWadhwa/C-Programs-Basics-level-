#include<stdio.h>
#include<conio.h>
main()
{
 int x[10],i;
 FILE *fp;
 fp=fopen("my file,txt","w");
 if(fp==NULL)
 {
  printf("file can not found:!!");
  exit(1);
 }
 printf("enter the numbers::");
 for(i=0;i<9;i++)
 scanf("%d",&x[i]);
 fputc(x[i],fp);
 fclose(fp);

}
