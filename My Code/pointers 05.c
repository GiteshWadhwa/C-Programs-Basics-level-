#include<stdio.h>
#include<conio.h>
main()
{
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d\t%d\t%d\t%d",x,r,q,p);
}
