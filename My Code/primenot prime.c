#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    int prime(int);
    int series(int);
    int primefactor(int);
    printf("enter a number:");
    scanf("%d",&num);
    prime(num);
    series(num);
    primefactor(num);
    getch();
}
prime(int x)
{
    int i;
    for(i=2;i<=x;i++)
      if(x%i==0)
       break;
       if(i==x)
       {
           printf("enterad number is prime number %d\n\n\n\t",x);
       }
       else
        {
          printf("entered number is not prime %d",x);
       }

}
series(int y)
{
    int x=2,i;
    while(y)
    {
    for(i=2;i<=x;i++)
      if(x%i==0)
       break;
       if(i==x)
       {
           printf("\n\n\n\tprime numbers are :::>>");
           printf("Series :%d\n",x);
           y--;
       }
       x++;
    }
}
primefactor(int x)
{
    int i,rem;
    for(i=2;x>1;i++)
    {
      while(x%i==0)
      {
           x=x/i;
         printf("prime factors are %d\n",i);

      }
    }
}
