#include<stdio.h>
int main()
{
    int num,var,binary=0,i=1,rem;
    printf("Enter Your Number:");
    scanf("%d",&num);
    var=num;
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        binary=binary+(rem*i);
        i=i*10;
        }
        printf("Binary Of The Number %d Is %d ",var,binary);
        return 0;
}
