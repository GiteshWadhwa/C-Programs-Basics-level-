#include<stdio.h>
#include<conio.h>
 main()
{
    int num,rem,binary=0,i=1,var;
    printf("Enter A decimal Number:\n");
    scanf("%d",&num);
    var=num;
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("The Binary Number Of The decimal Number %d is %d",var,binary);
    getch();
    return 0;
}
