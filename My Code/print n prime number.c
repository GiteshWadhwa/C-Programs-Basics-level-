#include<stdio.h>
#include<conio.h>
main()
{
 int num,x=2,i;
 printf("enter a number:");
 scanf("%d",&num);

    while(num)
    {
       for(i=2;i<=x;i++)

          if(x%i==0)
            break;
        if(i==x)
        {
            printf("%d\t",x);
            num--;
        }
        x++;
    }

}
