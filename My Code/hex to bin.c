/*#include<stdio.h>
#include<conio.h>
int main()
{
  int num,sum=0,i=0;
  printf("enter hexadecimal number:\n");
  scanf("%x",&num);
  while(num!=0)
  {
      sum=sum+pow(2,i)*(num%2);
      num=num/2;
      i++;
  }
  printf("%d",sum);
  getch();
  return 0;

}
