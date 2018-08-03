#include<stdio.h>
#include<conio.h>
main()
{
   int num,ans;
   int reverse(int);
   printf("enter a number:");
   scanf("%d",&num);
    ans=reverse(num);
    printf("%d",ans);
   getch();
   return 0;
}
int reverse(int x)
{
    int rem,rev=0;
   if(x==0)
    return 0;
   else
   while(x!=0)
   {
          rem=x%10;
            rev=rev*10+rem;
            x=reverse(x/10);
   }


         return rev;

}
