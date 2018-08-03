#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0,i=0;
    printf("Enter Your Number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        sum=sum+pow(16,i)*(num%10);
        num=num/10;
        i++;
    }
    printf("%d",sum);
    getch();
    return 0;
}
