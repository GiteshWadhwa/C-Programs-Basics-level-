#include<stdio.h>
#include<conio.h>
main()
{
    int num,sum=0,i=0;
    printf("Enter Binary Number:");
    scanf("%d",&num);
    while(num!=0)
    {
        sum=sum+pow(2,i)*(num%10);
        num=num/10;
        i++;
    }
    printf("%d",sum);
    getch();
    return 0;
}
