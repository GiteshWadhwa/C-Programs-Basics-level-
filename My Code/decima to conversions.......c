#include<stdio.h>
#include<conio.h>
 main()
{

    int x,s,o;
    int  binary(int);
    int octal(int);
    printf("enter a number:");
    scanf("%d",&x);
    s=binary(x);
    printf("Binary of decimal number is %d",s);
    o=octal(x);
    printf("\nOctal of decimal number is %d",o);
    getch();

}
int binary(int num)
{
    int rem,binary=0,i=1;

    while(num!=0)
    {
    rem=num%2;
    num=num/2;
    binary=binary+rem*i;
    i=i*10;
    }
    return(binary);


}
int octal(int num)
{
    int rem,i=1,octal=0;
    while(num!=0)
    {
        rem=num%8;
        num=num/8;
        octal=octal+rem*i;
        i=i*10;
    }
    return(octal);
}
