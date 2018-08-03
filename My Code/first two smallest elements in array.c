#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size:");
    scanf("%d",&size);
    int a[size],min,min2;
    printf("enter elements:");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);

        for(i=0;i<size;i++)
        {
            min=a[0];
        if(min>a[i])
            min=a[i];
            }
        printf("first minimum value is %d",min);
        for(i=0;i<size;i++)
        {
            min2=a[1];
        if(min2>a[i])
            min2=a[i];
        }
            printf("\nsecond minimum value is %d",min2);
}
