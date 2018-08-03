#include<stdio.h>
#include<conio.h>
main()
{
int num,ans;
int rev(int);
printf("enter number:");
scanf("%d",&num);
  ans=rev(num);
  printf("%d",ans);
  getch();
}
int rev(int x)
{
    int rem,rev=0;
    while(x!=0)
   {
    rem=x%10;
    x=x/10;
    rev=rev*10+rem;

    }

return(rev);
}
