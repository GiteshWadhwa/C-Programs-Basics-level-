#include<stdio.h>
#include<conio.h>
main()
{
  float prin,rate,time,ci;
  printf("Enter The Principle Value:\n");
  scanf("%f",&prin);
  printf("Enter The Rate Of Interest:\n");
  scanf("%f",&rate);
  printf("Enter The Value Of Time:\n");
  scanf("%f",&time);
  ci=prin*(pow((1+rate/100),time)-1);
  printf("Compound interest is %f",&ci);
  getch();
 return 0;
}
