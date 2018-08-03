#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,k;
    printf("enter numbers");
    scanf("\n%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        k=a;
    else
    {
        if(b>c)
            k=b;
        else
            k=c;
        printf("%d is greater!!",k);

}
}
