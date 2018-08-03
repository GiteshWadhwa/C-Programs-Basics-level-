#include<stdio.h>
main()
{
    int num,ans;
    int fact(int);
    printf("enter a number:");
    scanf("%d",&num);
    ans=fact(num);
    printf("Factorial of %d is %d",num,ans);
    getch();
}
fact(int x)
{
    int f;
    if(x==0)
    {
        return 1;
    }
    else
        {
          f=x*fact(x-1);
                  return f;
        }
}
