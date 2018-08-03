#include<stdio.h>
#include<conio.h>
main()
{
    int num,sum=0,rem,i;
    printf("enter number:");
    scanf("%d",&num);
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    sum=sum+rem;
    }
         printf("sum of digit is %d",sum);



}
