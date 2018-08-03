#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
main()
{
    enum fruits{apple,mango,banana,grapes,orange};
    int num;
    enum fruits f;
    printf("enter fruit number:\n");
    scanf("%d",&num);
    f=num;
    if(f==banana||f==mango)
    {
        printf("weighi gainer fruits");
    }
    else
    {
        printf("vitamins fruit");
    }
    getch();
    return 0;
}
