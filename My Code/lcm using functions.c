#include<stdio.h>
main()
{
 int num1,num2;
 int LCM(int,int);
 int HCF(int,int);
 printf("enter a number:");
 scanf("%d%d",&num1,&num2);
 LCM(num1,num2);
 HCF(num1,num2);
}
LCM(int x,int y)
{
    int i;
 for(i=1;i<=x*y;i++){
 if(i%x==0 && i%y==0)
 {
 printf("LCM=%d",i);
 }
 }
}
HCF(int x,int y)
{
    if(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            if(y>x)
            y=y-x;
        printf("\nHCF is %d",x);

    }

}
