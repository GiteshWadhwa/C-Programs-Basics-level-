#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,i;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1*num2;i++)
     if(i%num1==0&&i%num2==0)
     break;
     printf("LCM IS %d",i);



}
