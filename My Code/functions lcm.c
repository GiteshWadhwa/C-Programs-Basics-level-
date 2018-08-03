#include<stdio.h>
#include<conio.h>
main()
{
    int num1,num2;
    int lcm(int,int);
    printf("enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    lcm(num1,num2);
    getch();
}
lcm(int x1,int x2)
{

     int i;
    for(i=1;i<=x1*x2;i++)
    {
      if(i%x1==0&&i%x2==0)
      {
          printf("lcm of %d & %d is %d",x1,x2,i);
      }

    }
}
