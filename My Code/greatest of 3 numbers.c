#include<stdio.h>
#include<conio.h>
main()
{
 int num1,num2,num3;
 printf("enter three numbers:");
 scanf("%d%d%d",&num1,&num2,&num3);
 (num1>num2)?(num1>num3)?printf("%d is greater:",num1):printf("%d is greater:",num3):(num2>num3)?printf("%d is greater:",num2):printf("%d is greater",num3);
 getch();
 return 0;
}
