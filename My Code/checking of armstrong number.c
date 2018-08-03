#include<stdio.h>
#include<conio.h>
main()
{
    int num,sum=0,rem,x;
    printf("enter number:");
    scanf("%d",&num);

      x=num;
      while(x!=0)
      {
          rem=x%10;
          sum=sum+rem*rem*rem;
          x=x/10;
      }
      if(sum==num)
      {
         printf("entered number is armstrong:!!");
       }
       else
       {
           printf("entered number is not armstrong number!!");
       }

    getch();
    return 0;
}
