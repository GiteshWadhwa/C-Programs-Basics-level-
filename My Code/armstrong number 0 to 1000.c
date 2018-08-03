#include<stdio.h>
#include<conio.h>
main()
{
    int i,rem,arm=0,num;
    printf("Armstrong number between 0 to 1000 are:\n");
    for(i=1;i<=1000;i++)
    {
        arm=0;
        num=i;
        while(num!=0)
            {
              rem=num%10;
              arm=arm+rem*rem*rem;
               num=num/10;
            }

    if(arm==i)
        {
         printf("%d\n",i);
        }

    }
     getch();
    return 0;
}
