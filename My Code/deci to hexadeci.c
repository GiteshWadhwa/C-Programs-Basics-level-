#include<stdio.h>
#include<conio.h>
main()
{
    int num,i=1,binary=0,rem;
    printf("enter a decimal number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("%d",binary);
}
