#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int i,sum,rem,x;
    printf("armstrong numbers are:");
    for(i=1;i<=1000;i++)

    {
        sum=0;
        x=i;
        while(x!=0)
        {
         rem=x%10;
         sum=sum+rem*rem*rem;
         x=x/10;
        }

        if(sum==i)
        printf("%d\n",x);
    }

    getch();
    return 0;
}
