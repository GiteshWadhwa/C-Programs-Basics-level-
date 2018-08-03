#include<stdio.h>
#include<conio.h>
 main()
{
    int num,sum=0,i=0,var;
    printf("Enter A binary number:\n");
    scanf("%d",&num);
    var=num;
    while(num!=0)
          {
              sum=sum+pow(2,i)*(num%10);
              num=num/10;
              i++;
          }
          printf("binary number = %d\tto\tdecimal number = %d",var,sum);
          getch();
          return 0;

}
