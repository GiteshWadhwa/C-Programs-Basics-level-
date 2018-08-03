#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2,min,i;
    printf("enter numbers:");
    scanf("%d%d",&num1,&num2);
    min=num1<num2?num1:num2;
    for(i=2;i<=min;i++)
        if(num1%i==0&&num2%i==0)
        break;
    if(i==min+1)
    {
        printf("number %d & %d are coprime",num1,num2);
    }
    else
        {
            printf("number %d  %d are not coprime number",num1,num2);

    }
}
