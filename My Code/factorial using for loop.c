#include<stdio.h>
#include<conio.h>
main()
{
  int num,i,x,f=1;
  printf("enter a number:");
  scanf("%d",&num);
  x=num;
  for(i=x;i>0;i--)
  {
      f=f*i;
  }

  printf("factorial of %d is = %d",x,f);
  getch();
  return 0;


}
