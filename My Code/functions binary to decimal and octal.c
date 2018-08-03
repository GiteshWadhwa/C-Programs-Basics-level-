#include<stdio.h>
#include<conio.h>
main()
{
    int num,s,x,o;
    int decimal(int);
    int octal(int);
    printf("enter a binary number:");
    scanf("%d",&x);
    s=decimal(x);
    printf("decimal number of the entered binary number is %d",s);
   o=octal(x);
   printf("\noctal number of entered binary number is %o",o);
    getch();
}
decimal(int num)
{
    int sum=0,rem,i=0;
    while(num!=0)
    {
    rem=num%10;
    num=num/10;
    sum=sum+pow(2,i)*rem;
    i=i++;
    }
    return(sum);


}
octal(int num)
{

    int sum=0,i=0,rem;
    while(num!=0)
    {
    rem=num%8;
    num=num/8;
    sum=sum+pow(8,i)*rem;
    i=i++;
    }
    return(sum);
}



