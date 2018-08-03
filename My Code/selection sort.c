#include<stdio.h>
main()
{
    int arr[10],i,max;
    printf("enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
        max=arr[0];
        for(i=0;i<=9;i++)
        if(max<arr[i])
            max=arr[i];
printf("%d",max);
    }
