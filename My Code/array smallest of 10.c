#include<stdio.h>
#include<conio.h>
main()
{
    int arr[10],min,i;
    printf("enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    min=arr[0];
    if(min<arr[0])
        min=arr[0];
    printf("minimum value is %d",min);

}
