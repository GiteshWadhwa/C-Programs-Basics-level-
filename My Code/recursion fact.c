#include<stdio.h>
main()
{
 int num,F;
 int fact(int);
 printf("enter a factorial number:");
 scanf("%d",&num);
 F=fact(num);
 printf("Factorial of %d is %d",num,F);
}
      fact(x)
 {
int f;
        if(x==0)
    {
        return 1;
    }
     else
    {
        f=x*fact(x-1);
        return f;
    }

 }
