#include<stdio.h>
#include<conio.h>
main()
{
    int num,rem,hexaD=0;
    printf("Enter The Decimal Number:\n");
    scanf("%d",&num);
   /* while(num!=0)
    {
        rem=num%16;
        if(rem<10)
            rem=rem+48;
        else
            rem=rem+55;

        num=num/16;
        hexaD=hexaD+(num*i);
        i=i*10;
    }*/
    printf("Equivalent HexaDecimal Number Is %x",num);
    getch();
    return 0;
}
