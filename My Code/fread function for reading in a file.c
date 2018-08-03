#include<stdio.h>
struct book
{
 int book_id;
 char title[20];
 float price;
}
main()
{
struct book b1;
 FILE *fp;
 fp=fopen("myfile.txt","rb");
  if(fp==NULL)
  {
   printf("file not found:");
   exit(1);
  }
 while(fread(&b1,sizeof(b1),1,fp)>0){
 printf("%d %s %f",b1.book_id,b1.title,b1.price);
 }
 fclose(fp);

}

