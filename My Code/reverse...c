#include<stdio.h>
#include<conio.h>
main()
{
    int num,rem,temp,rev=0,n;
    printf("\n\n\tenter number:");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse of number is %d",rev);
    getch();
    return 0;


}
