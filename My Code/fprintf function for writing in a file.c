#include<stdio.h>
main()
{
 FILE *fp;
 int a,b;
 fp=fopen("addition.txt","w");
 printf("enter two numbers:");
 scanf("%d%d",&a,&b);
 fprintf(fp,"Sum of %d & %d is %d",a,b,a+b);
 fclose(fp);
}
