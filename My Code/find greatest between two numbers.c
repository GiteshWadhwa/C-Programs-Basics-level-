#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2;
    printf("enter numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("%d is greater",num1);
    else if(num1<num2)
        printf("%d is greater",num2);
    else
        printf("%d and %d are equal!!",num1,num2);

}
