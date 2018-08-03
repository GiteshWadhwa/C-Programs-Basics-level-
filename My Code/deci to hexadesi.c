#include<stdio.h>
#include<conio.h>
int main()
{
    int dnum,num,rem,i=1,j;
    char hd[100];
    printf("enter number:\n");
    scanf("%d",&dnum);
   /* num=dnum;
    while(num!=0)
    {
        rem=num%16;
        if(rem<10)
        {
            rem=rem+48;
        }
        else
            {
              rem=rem+55;
              hd[i++]=rem;
            num=num/16;
            }
        }*/
        printf("%x",dnum);
        getch();
        return 0;

}
