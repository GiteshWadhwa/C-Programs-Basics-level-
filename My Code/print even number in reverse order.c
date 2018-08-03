#include<stdio.h>
main()
{
    int  i,num;
    printf("enter number:");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        printf("%d\n",2*i);
    }
}
