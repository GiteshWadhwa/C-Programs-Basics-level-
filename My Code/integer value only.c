#include<stdio.h>
main()
{
int x;
x=getintegervalueonly();
 printf("\nyou entered %d",x);
 getch();
}
getintegervalueonly()
{
  int ch,num=0;
  do
  {
   ch=getch();
   if(ch>=48&&ch<=57)
   {
     printf("%c",ch);
     num=num*10+(ch-48);
    }if(ch==13)
    break;
  }while(1);
  return(num);
}
