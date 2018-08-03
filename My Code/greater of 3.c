#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,k;
    printf("enter three values:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
     {

       if(a>c)
        k=a;
    else
        k=c;
     }
     else
     {

        if(b>c)
        k=b;
    else
        k=c;
}    printf("%d is greater!",k);

}
