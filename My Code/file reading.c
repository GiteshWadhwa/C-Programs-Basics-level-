#include<stdio.h>
#include<conio.h>
main()
{
    FILE *fp;
    char read;
   fp=fopen("f2.txt","r");
    if(fp==NULL)
    {
        printf("file can't be found ");
        exit(1);
    }
    read=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",read);
        read=fgetc(fp);
    }
    fclose(fp);

}
