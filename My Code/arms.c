#include<stdio.h>
#include<conio.h>
main()
{
 int num,rem,arm=0,x;
 printf("enetr a number:");
 scanf("%d",&num);
 x=num;
 while(x!=0)
 {
  rem=x%10;
  arm=arm+rem*rem*rem;
  x=x/10;
  }
  if(arm==num)
  {
   printf("%d is armstrong number",arm);
  }
  else
    printf("%d not armstrong number!!",num);//at this statement we write num bcoz if we write arm  the answer is rem*rem*rem
  getch();                                   //eg .if we enter 2 ,it prints 8 is nit armstrong
  return 0;
}
