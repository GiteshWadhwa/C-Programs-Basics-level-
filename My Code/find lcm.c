#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,L;
    printf("enter two number's\n");
    scanf("%d%d",&a,&b);
    for(L=1;L<=a*b;L++)
        if(L%a==0&&L%b==0)
     break;
    printf("LCM is %d",L);
}
