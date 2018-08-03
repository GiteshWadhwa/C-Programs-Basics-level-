#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    char s[]="Hello world";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("file can not open");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
    getch();
}
