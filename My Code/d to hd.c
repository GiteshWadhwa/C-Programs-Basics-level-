#include<stdio.h>
#include<conio.h>
#include<math.h>
 main()
{
    int num,i=1,hd=0,rem;
    printf("enter decimal number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%16;

        hd=hd+rem*i;
        num=num/16;
        i=i*10;
    }
    printf("%d\n",hd);
    getch();
    return 0;
}
