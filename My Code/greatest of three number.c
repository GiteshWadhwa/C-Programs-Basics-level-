#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<float.h>
#include<stddef.h>
main()
{
    int a,b,c;
    printf("enter the 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("greater is %d",a);
        }
        else
            {
                printf("greater is %d",c);
            }
    }
    else
        {
            if(b>c)
            {
                printf("greater is %d",b);
            }
            else
                {
                    printf("greater is %d",c);
                }
        }
        getch();
        return 0;
}
