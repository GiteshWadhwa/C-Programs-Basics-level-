#include<stdio.h>
#include<conio.h>
main()
{
    int num=2,i,x;
    printf("enter a number:");
    scanf("%d",&x);
 while(x)
 {
        for(i=2;i<=num;i++)

        if(num%i==0)
            break;
        if(i==num)
        {
            printf("%d is a prime\n",num);
            x--;
        }
        num++;

 }
}
