#include<stdio.h>
#include<conio.h>
main()
{
    int num,i,rem,copy,sum=0;
    printf("Armstrong numbers Are:");
    for(num=1;num<=1000;num++)
    {
        copy=num;
        sum=0;
        while(copy!=0)
        {
            rem=copy%10;
           sum=sum+rem*rem*rem;
             copy=copy/10;
        }
        if(sum==num)
        printf("\n%d\n",num);

    }

}
