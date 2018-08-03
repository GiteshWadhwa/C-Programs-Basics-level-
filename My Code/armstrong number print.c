#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int i,rem,arm=0,num;
    printf("Armstrong numbers are:\n");
    for(i=1;i<=1000;i++)
    {
        num=i;
        arm=0;
        while(num!=0)
        {rem=num%10;
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
