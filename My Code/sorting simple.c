#include<stdio.h>
#include<conio.h>
main()
{
    int a[5],i,temp,round;
    printf("enter five numbers Randomly:");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);

                for(round=0;round<=4;round++)
        {
                    for(i=0;i<=4-round;i++)

            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }


        }
        printf("\n\ndictionary sorting is \n");
            for(i=0;i<=4;i++)
         printf("%d\n",a[i]);




}

