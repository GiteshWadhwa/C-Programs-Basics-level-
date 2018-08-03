#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int n,sum=0,i=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+pow(2,i)*(n%10);
        n=n/10;
        i++;

    }
     printf("%d",sum);
    getch();
    return 0;
}
