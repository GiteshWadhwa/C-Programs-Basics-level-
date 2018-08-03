#include<stdio.h>
#include<conio.h>
int main()
{
 int decimalNumber,remainder,quotient;
 int i=1,j,temp;
 char hexadecimalNumber[100];
 printf("enter any decimal number:\n");
 scanf("%d",&decimalNumber);
 quotient=decimalNumber;
 while(quotient!=0)
 {
     temp=quotient%16;
     //To convert integer into character
     if(temp<10)
        {
          temp=temp+48;
        }else
        {
            temp=temp+55;
            hexadecimalNumber[i++]=temp;
            quotient=quotient/16;
        }
        printf("%d",decimalNumber);
        for(j=i-1;j>0;j--)
        {
            printf("%c",hexadecimalNumber[j]);
        }
        getch();
        return 0;
 }


}
