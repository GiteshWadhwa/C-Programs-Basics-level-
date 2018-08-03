#include<stdio.h>
main()
{
 int i,temp,round,size;
 printf("enter the size of array:");
 scanf("%d",&size);
 int a[size];
 printf("enter 10 numbers randomly:");
 for(i=0;i<=size;i++)
    scanf("%d",&a[i]);
    for(round=1;round<=size;round++)
    {
        for(i=0;i<=size-round;i++)

        {

        if(a[i]<a[i+1])
       {
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
       }
    }
    }
    printf("After  sort:>>\n");
    for(i=0;i<=size;i++)
        printf("%d ",a[i]);

}
