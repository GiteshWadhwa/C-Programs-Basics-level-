#include<stdio.h>
#include<conio.h>
main()
{
    int a[10],i,j,min,max,temp;
    min=10;
    max=min+9;
    srand();
    for(i=0;i<=9;i++)
    {
       temp=rand()%10+min;
       for(j=0;j<=i-1;j++)
        {
        if(temp==a[j])
        break;
        }
       if(i==j)
       a[i]=temp;
       else
        i--;
       }

       for(i=0;i<=9;i++)
        printf("%d ",a[i]);


    }


