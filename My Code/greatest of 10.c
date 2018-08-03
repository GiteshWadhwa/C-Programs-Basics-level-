#include<stdio.h>
#include<conio.h>
main()
{
   int  arr[10],i,max;
    printf("enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=1;i<=9;i++)
        if(max<arr[i])
        max=arr[i];
    printf(" max value is %d",arr[i]);
}
