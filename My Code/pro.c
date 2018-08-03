#include"stdio.h"
int main()
{
    int a[10],i,round,temp;
    printf("enter elements in array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(round=1;round<=9;round++)
    {
        for(i=0;i<=8;i++)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<=9;i++)
        printf("%d",a[i]);
}
