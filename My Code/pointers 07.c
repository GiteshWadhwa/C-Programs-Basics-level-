#include<stdio.h>
#include<conio.h>
main()
{
    int a[5],*p,i;
    p=&a[0];
    for(i=0;i<=4;i++)
        scanf("%d",p+i);
    for(i=0;i<=4;i++)
        printf("%d\t",*(p+i));
}
