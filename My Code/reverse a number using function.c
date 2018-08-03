#include<stdio.h>
#include<conio.h>
main()
{
 int num,rv;
 int rev(int);
 printf("enter a number:");
 scanf("%d",&num);
 rv=rev(num);
 printf("%d",rv);
 if(rv==num)
 printf("\n\nentered number is palindrome:!!");
 else
    printf("\n\nenterd number is not a palindrome number:!!");
}
rev(x)
{
 int r=0,rem;
 while(x!=0){
 rem=x%10;
 x=x/10;
 r=r*10+rem;}
 return(r);
}
