
 #include<stdio.h>
#include<conio.h>
main()
{
    int decimalNumber,num,rem,hexaD=0,i=1,temp;
    printf("enter a decimal number:\n");
    scanf("%d",&decimalNumber);
    decimalNumber=num;

         while(num!=0)
    {
        rem=num%16;
        num=num/16;
        hexaD=hexaD+(num*i);
        i=i*10;
    }
         printf("%d",hexaD);
      /*  if(rem<10)
            {
                rem=rem+48;
            }
        else

            {
                rem=rem+55;

             }
    }
   printf("%c",rem);*/
   getch();
   return 0;
}
