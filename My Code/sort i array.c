#include<stdio.h>
#include<conio.h>
main()
{
    char a[3][10],s[10];
    int i,round,r;
    printf("enter three strings:");
    for(i=0;i<=2;i++)
        gets(a[i]);

        for(round=1;round<=2;round++)
        {
            for(i=0;i<=2-round;i++)
            {
                r=strcmp(a[i],a[i+1]);

            if(r>0)
       {
        strcpy(s,a[i]);
        strcpy(a[i],a[i+1]);
        strcpy(a[i+1],s);
       }
    }
        }
        printf("\nDictionary sorting Arrangement is:\n");
        for(i=0;i<=2;i++)
            puts(a[i]);

}
