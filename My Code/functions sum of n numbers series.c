#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
     }
    printf("%d\t",sum);


}
