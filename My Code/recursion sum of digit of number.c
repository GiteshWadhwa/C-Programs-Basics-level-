#include<stdio.h>
#include<conio.h>
main()
{
    int num,ans;
    int sumofdigit(int);
    printf("enter a number:");
    scanf("%d",&num);
    ans=sumofdigit(num);
    printf("sum is %d",ans);
    getch();
}
sumofdigit(int x)
{
    if(x==0)
        return 0;
    return(x%10+sumofdigit(x/10));
}
