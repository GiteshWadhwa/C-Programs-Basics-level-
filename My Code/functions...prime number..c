#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    int primeNo(int);
    printf("enter a number:");
    scanf("%d",&num);
    primeNo(num);
    getch();
}
primeNo(int x)
{
    int i;
    for(i=2;i<=x-1;i++)

        if(x%i==0)
            break;

            if(x==i)

               printf("%d is a prime number",x);

            else

                printf("%d is not a prime number:",x);



}


