#include<stdio.h>
#include<conio.h>
main()
{
    int arr[10],i,min;
    printf("enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
        min=arr[0];
    for(i=1;i<=9;i++)
        if(min>arr[i])
        min=arr[i];
    printf("minimum is %d",min);
}
