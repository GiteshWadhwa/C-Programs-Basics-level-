#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int num1,num2,p=1,i;
    printf("enter the number and his power:");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num2;i++)
        p=p*num1;
    printf("%d",p);
}
