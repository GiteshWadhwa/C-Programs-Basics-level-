#include<stdio.h>
#include<conio.h>
main()
{
    int num,n,f=1;
    printf("enter number:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        f=f*n;
        n--;

    }
     printf("%d",f);
     getch();
     return 0;

}
