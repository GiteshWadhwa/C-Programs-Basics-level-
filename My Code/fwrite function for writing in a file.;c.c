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
 fp=fopen("myfile.txt","wb");
 printf("enter book_id&title &price:");
 scanf("%d",&b1.book_id);
  fflush(stdin);
 gets(b1.title);
 scanf("%f",&b1.price);
 fwrite(&b1,sizeof(b1),1,fp);
 fclose(fp);

}
