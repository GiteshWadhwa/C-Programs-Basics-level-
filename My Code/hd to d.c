#include<stdio.h>
#include<conio.h>
main()
{
    int num,sum=0,i=0;
    printf("enter hexadecimal number:\n");
    scanf("%x",&num);
    /*while(num!=0)
    {
        sum=sum+pow(16,i)*(num%10);
        num=num/10;
        i++;
    }*/
    printf("%d",num);
    getch();
    return 0;
}
