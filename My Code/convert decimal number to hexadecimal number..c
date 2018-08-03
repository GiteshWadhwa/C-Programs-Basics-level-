#include<stdio.h>
#include<conio.h>
main()
{
    int num,i=0,j=0,x,rem;
    char hexadecimalnum;
    printf("enter a decimal number:\n");
    scanf("%d",&num);
    x=num;
    while(x!=0)
    {
        rem=num%16;
        if(rem<10)
        {
           hexadecimalnum=48+(rem*j);
           j++;
        }
        else
            {
                hexadecimalnum=55+(rem*j);
                j++;
            }
            num=num/16;
            for(i=j;i>=0;i--)
            {
                printf("%c",hexadecimalnum);
            }
                 getch();
                 return 0;

    }
}
