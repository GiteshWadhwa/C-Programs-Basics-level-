#include<stdio.h>
int main()
{
    int num,rem,var,binary=0,i=1;
    printf("enter Your numBer:\n");
    scanf("%d",&num);

    var=num;
    while(num!=0)
    {
        rem=num%2;
        num=num/2;

        binary=binary+(rem*i);
        i=i*10;
    }
        printf("\n\tBinary equivalent of %d is %d",var,binary );

        return 0;



}
