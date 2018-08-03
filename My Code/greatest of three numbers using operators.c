#include<stdio.h>
main()
{
 int num1,num2,num3;
 printf("enter the three numbers:");
 scanf("%d%d%d",&num1,&num2,&num3);
 (num1>num2)?(num1>num3)?printf("%d",num1):printf("%d",num3):(num2>num3)?printf("%d",num2):printf("%d",num3);

}
