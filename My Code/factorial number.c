#include<stdio.h>
#include<conio.h>
main()
{
    int  num,n,f=1;
    printf("enter number:");
    scanf("%d",&num);
    n=num;
      while(n!=0)
      {
          f=f*n;
          n--;
      }
printf("factorial of number %d is %d",num,f);
 getch();
 return 0;
}
