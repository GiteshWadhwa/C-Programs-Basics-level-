#include<stdio.h>
#include<conio.h>
main()
{
    int num,ans;
    int square(int);
    printf("enter a number:");
    scanf("%d",&num);
    ans=square(num);
    printf("%d",ans);
    getch();
}
square(int x)
{
    if(x/10==0)
   return(x*x);
   return (x%10) * (x%10)+square(x/10);

}
