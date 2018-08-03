#include<stdio.h>
#include<conio.h>
main()
{

    int num,rem,i=1,bin=0;
    printf("Enter number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        bin=bin+(rem*i);
        i=i*10;
    }
    printf("%d",bin);
    getch();
    return 0;
}
