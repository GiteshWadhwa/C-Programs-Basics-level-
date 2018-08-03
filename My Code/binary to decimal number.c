#include<stdio.h>
#include<conio.h>
#include<math.h>
 main()
{
    int bin,var,sum=0,i=0;
    printf("Enter A binary Number:\n");
    scanf("%d",&bin);
    var=bin;
    while(bin!=0)
    {
        sum=sum+pow(2,i)*(bin%10);
        bin=bin/10;
        i++;
    }
    printf("decimal number of %d is %d",var,sum);
    getch();
    return 0;
}
